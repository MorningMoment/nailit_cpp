# include <iostream>
using namespace std;

class complex{
	private:
		double real, image;
		 
	public : 
		complex(double r=0,double i=0); 
		void show();

		
		complex operator+(const complex &c);
		
		complex operator-(const complex &c){
			complex ans;
			ans.real = real-c.real;
			ans.image = image - c.image;
			return ans;
		}
		
		complex operator=(const complex &c){
			complex ans;
			ans.real = c.real;
			ans.image = c.image;
			return ans;
		}
		
		bool operator>(const complex &c);
};

complex::complex(double r, double i):real(r),image(i){
		}
void complex::show(){
			cout<<"("<<real<<" , "<<image<<"i)"<<endl;
		}
complex complex::operator+(const complex &c){
			complex ans;
			ans.real = real+c.real;
			ans.image = image + c.image;
			return ans;
		}
bool complex::operator>(const complex &c){
			return this->real>c.real;
		}
	
		
int main(){
	complex c1(1,2),c2(3,4);//1+2i,3+4i
	c1.show();
	c2.show();
	//complex c3 = c1+c2; 若没有定义，会报错 "no match for operator +" 
	complex c3 = c1+c2;
	c3.show();
	complex c4;
	c4 = c3-c1; //似乎会报错？
	c4.show(); //显示（0,0i)? 
	cout<<endl<<endl<<(c1>c2)<<endl;
	return 0;
}  
