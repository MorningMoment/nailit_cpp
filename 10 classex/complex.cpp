//定义一个复数类 
# include <iostream>
using namespace std;

class complex{
	public : // 一定要写public
	//定义两个实数数据成员real实部和image虚部 实数==double
		double real, image;
	
	
	complex(){ //无参的构造函数，没有返回类型，名字要和类一模一样 
		real = 0;
		image = 1;
		cout<<"complex constructor..."<<endl; //在main中调用 complex c1时候会自动调用这个命令 
	}
	
	complex(double x, double y){ //重载构造函数 ，要写两次double，每一个参数都要给出类型。 
		real = x;
		image = y;
		cout<<"complex constructor..."<<endl;
	} 
	
	complex(double x){ //重载构造函数 
	real = x;
	image = 1;
	cout<<"complex constructor..."<<endl;
	} 
	
	
	void show(){ //定义打印复数信息的成员函数
		if(image == 0){ //public 中的东西，不需要在括号里声明，就能直接调用。 
			cout<<real<<endl;
		}
		else if(image < 0){
			cout<<real<<image<<'i'<<endl;
		}
		else{
			cout<<real<<'+'<<image<<'i'<<endl;
		}
	} 
	
	//定义实现与另一复数相加、减、乘、除 
	
	complex plus(complex c){ //和另一个complex类型的变量运算 返回complex类型 
		complex ans;
		ans.real = this->real + c.real;
		ans.image = this->image + c.image; //可以直接写成 image +c.image 
		return ans ;
	}
	
	
};


int main(){
	complex c1; //无参数的时候，定义不要写括号。 
	c1.show();
	//不可以用cout<<c1<<endl; 
	// 不可以 c1.complex(2) 来赋值 
	complex c2(1,-2);
	c2.show();
	complex c3(1.5);
	c3.show();
	
	complex c5(10,20),c6(2,12);
	complex c4 = c5.plus(c6); //要先定义变量 
	cout<<"what ever"<<endl;
	c3.plus(c5).show(); //这里还会调用一次complex构造函数
	 
	 
	
	return 0;
} 
