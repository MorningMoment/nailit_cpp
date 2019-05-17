# include <iostream>
using namespace std;

class demo{
	public:
		double x;
		int y;
	demo(){
		x = 0.3;
		y = 0;
		cout<<"youtjehe"<<endl;
	}
	demo(double x, int y){
		this->x = x;
		this->y = y;
	}
	
	~demo(){ //不能重载 
		show(); 
		cout<<"*************** everything is over"<<endl;
	} //注意输出的顺序 
	
	void show(){
		cout<<"x = "<<x<<" y = "<<y<<endl;
	}
}; 

void fun(){
	cout<<"begin"<<endl;
	demo fd1;
	cout<<"fun..."<<endl;
}


int main(){
	demo d1;
	cout<<"1 *********************"<<endl;
	demo d2(0.5,12);
	cout<<"2 *********************"<<endl;
	cout<<"youyou"<<endl;
	cout<<"*********************"<<endl;
	fun(); //出main前回收 d1 d2 
	return 0;
}
