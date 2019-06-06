# include <iostream>
using namespace std;

class shape{

	public:
		string color;
		shape(string col = "white"):color(col){
			cout<<endl<<"shape constructor...."<<endl; 
		}
//		void showinfo(){
//			cout<<"This is a shape"<<endl<<"color = "<<color<<endl;
//		} 
		virtual void showinfo(){
			cout<<"This is a shape"<<"   "<<"color = "<<color<<endl;
		} 
		
		virtual double getarea()=0; //纯虚函数的定义，没有函数体。
		//定义了纯虚函数后，类就成了抽象类。 
		//下面每一个类都要定义getarea函数 
		
		~shape(){
			cout<<"shape destuctor ***"<<endl<<endl;
		}
};

class circle:public shape{
	private:
		double r;
	public:
		circle(double rnum =0 ,string col="white"):shape(col),r(rnum){
			cout<<endl<<"circle constructor....."<<endl<<endl;
		}
		void showinfo(){
			cout<<"This is a circle"<<"   "<<"color = "<<color<<"  r is "<<r<<endl;
		} 
		~circle(){
			cout<<"********** circle destructor"<<endl;
		}
		double getarea(){ //因为shape里定义了纯虚函数。  子类必须实现父类的纯虚函数，自己才不是抽象类 
			return r*r*3.14;
		} 
};

class rec:public shape{
	private:
		double x,y,w,h;
	public:
		rec(double xnum = 0, double ynum =0, double wnum = 0, double hnum = 0, string col = "white"):shape(col),x(xnum),y(ynum),w(wnum),h(hnum){
			cout<<endl<<"rect constructor"<<endl; 
		}
		~rec(){
			cout<<"...... rect destructor"<<endl;
		}
		void showinfo(){
			cout<<"This is a rec: "<<color<<"("<<x<<","<<y<<")"<<endl;
		}
		double getarea(){//子类必须实现父类的纯虚函数，自己才不是抽象类 
			return w*h;
		} 
};


int main(){
	rec r1(1,2,3,4,"green"); //先调用父类shape的构造函数，然后构造自己的circle构造函数 
	r1.showinfo();
	
	circle c1(1,"blue");
	c1.showinfo();
	
	
	cout<<endl<<endl<<"1*********************"<<endl;
	
//	shape s1 = c1; //抽象类不能有对象 
//	s1.showinfo();//调用的是shape的showinfo ，不能访问子类的东西  
//	cout<<endl<<endl<<"2*********************"<<endl;
	
	shape *spt = &c1; //纯虚函数可以用指针赋值 
	spt->showinfo();//在父类shape的showinfo 为虚函数时，调用的是circle的showinfo 
	cout<<spt->getarea()<<endl; 
	cout<<endl<<endl<<"3*********************"<<endl;
	
	shape &sref = r1; //纯虚函数可以引用赋值 
	sref.showinfo();//在父类shape的showinfo 为虚函数时，调用的是circle的showinfo  
	cout<<sref.getarea()<<endl;
	cout<<endl<<endl<<"4*********************"<<endl;
	return 0;
}
