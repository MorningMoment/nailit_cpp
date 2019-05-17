#include <iostream>
#include <cmath>
using namespace std;

class circle{
	private:
		static double pi ;
		double x; double y; double r;
	
	public:
		circle();
		circle(double xv,double yv,double rv);
		~circle();
		void setr(double newr);
		void setpi(double newpi);
		void showpi();
		double area();
		double circum();
		bool isintersect(circle c2);
		static void showpii();
	 
};

//(3)
double circle::pi = 3.14159265354;

//(2)
circle::circle(){
	x = 0;
	y = 0;
	r = 1;
}

//(2)
circle::circle(double xv,double yv,double rv){
	this->x=xv;
	this->y=yv;
	this->r=rv;
	}

//(4)
circle::~circle(){
	cout<<"*******destructor*******"<<endl;
	cout<<"x = "<<x<<" // y = "<<y<<" // r = "<<r<<endl;
	
}

//(5)
void circle::setr(double newr){
	this->r = newr;
}

//(5)
void circle::setpi(double newpi){
	this->pi = newpi;
}

//(5)
void circle::showpi(){
	cout<<"pi = "<<pi<<endl;
}

//(6)
double circle::area(){
	return pi*r*r;
}

//(6)
double circle::circum(){
	return 2*pi*r;
}

//(7)
bool circle::isintersect(circle c2){
	double distance = sqrt(pow(this->x - c2.x,2)+pow(this->y - c2.y,2));
	double sum_r = this->r + c2.r;
	if(distance>=sum_r) return false;
	else return true;
}

void circle::showpii(){
	cout<<"pi = "<<pi<<endl;
//	cout<<"r = "<<r<<endl; //error,会报错 ，因为r不是static参数 
}

int main(){
	circle c1;
	circle c2(1,1,2);
	c1.setr(1);

// (6)
	cout<<"the area is "<<c1.area()<<endl;
	cout<<"the circum is "<<c1.circum()<<endl;
	
// (7)
	cout<<"inter"<<c1.isintersect(c2)<<endl;

// (8) ~(10) 
	c1.setpi(1234);
	c1.showpi();
	c1.showpii();

}

