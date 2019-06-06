# include <iostream>
using namespace std;

class complex{
	private:
		double real, image;
		 
	public : 
		complex(double r=100, double i=100):real(r),image(i){
		}
		void show(){
			cout<<"("<<real<<" , "<<image<<"i)"<<endl;
		}
		
		complex operator+(const complex &c){
			complex ans;
			ans.real = real+c.real;
			ans.image = image + c.image;
			return ans;
		}
		
		complex operator-(const complex &c){
			complex ans;
			ans.real = real-c.real;
			ans.image = image - c.image;
			cout<<"********"<<endl; 
			ans.show();
			return ans;
		}
		
		complex operator=(const complex &c){
			real = c.real;
			image = c.image;
			return *this;
		}
		
		bool operator>(const complex &c){
			return this->real>c.real;
		}
};


int main(){
	complex c1(1,2),c2(3,4);//1+2i,3+4i
	c1.show();
	c2.show();
	//complex c3 = c1+c2; 若没有定义，会报错 "no match for operator +" 
	complex c3 = c1+c2;
	c3.show();
	
	complex c4 = c3-c1; //似乎会报错？
	cout<<"(((())))"<<endl; 
	c4.show(); 
	
	complex c5; 
	c5 = c3-c1; //分开写才用了等号，否则只用了拷贝构造函数 
	c5.show(); //显示（100,100i)?
	return 0;
}  
