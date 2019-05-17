# include <iostream>
# include <cmath>
using namespace std;

class point{
	
	private:
		double x,y;
	public : 
		point(double x1,double y1):x(x1),y(y1){ 
			cout<<"point constructed"<<endl;
		}
		point(const point &obj){ //一定要有& 加const说明在拷贝构造函数里不可以改变源point 
			x = obj.x;
			y = obj.y; //必须要有这两步才能拷贝过去 
			cout<<">>copy point constructer"<<endl;
		} 
		point():x(1),y(1){
			cout<<"point constructed"<<endl;
		}
		point(double x1):x(x1),y(1){
			cout<<"point constructed"<<endl;
		}
		
		~point(){
			cout<<"point destructed         ";
			cout<<"x = "<<x<<" y = "<<y<<endl<<endl; 
		}
		void showpoint(){
			cout<<"x = "<<x<<" y = "<<y<<endl; 
		}
		double distance(point point1){
			double dis = sqrt(pow(x-point1.x,2)+pow(y-point1.y,2));
			return dis;
		}
		
		double newdistance(point &p1){ //引用传递 ，point &p = p2,没有拷贝，就是引用 
			double dis = sqrt(pow(x-p1.x,2)+pow(y-p1.y,2));
			return dis;
		} 
	
};

int main(){
	point p1,p2(2,3);
	
	cout<<endl<<"1*************"<<endl; //调用拷贝构造函数的第一种情况 
	point p3 = p2; //对象初始化的时候，把另一个对象赋值给他，就会调用新对象的拷贝构造函数（p3的构造函数） 
	//若没有point(const point &obj)函数，出现两个construct，三个deconstruct
	
	//如果不定义 point(const point &obj)函数，就是“浅拷贝”
	//自己定义了point(const point &obj)函数，就是深拷贝 
	
	cout<<endl<<"2*************"<<endl; //调用拷贝构造函数的第二种情况 
	cout<<p1.distance(p2)<<endl; //point object作为参数，值传递（注意，值！！）的时候，调用拷贝构造函数  
	//原因是在distance函数中有用到 point p = p2， 即p.copy(p2) 
	
	cout<<endl<<"3*************"<<endl; 
	cout<<p1.newdistance(p2)<<endl<<endl<<endl;  //引用传递，没有调用拷贝构造函数，也没有用析构函数 
	
} 
