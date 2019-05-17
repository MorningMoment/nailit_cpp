#include <iostream>
#include <cstring>
using namespace std;

class demo{
	private:
		static int x;
		int y;
		
	public:
		static void setx(int x);
		void sety(int y){
			this->y = y;
			} 
		~demo(){
			cout<<endl<<"***********destructor*********"<<endl;
			cout<<x<<"      "<<y<<endl; 
		}
};
//
void demo::setx(int num){
	//this->x = num; 静态变量不能用this指向
	 x = num; 
}
int demo::x = 12;

int main(){
	demo d1,d2;
	d1.sety(9);
	d2.sety(10);
	d1.setx(100);
}
