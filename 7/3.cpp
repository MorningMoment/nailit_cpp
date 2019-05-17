# include <iostream>
using namespace std;

int gx = 100;
// cout << "ejfhskfh"<<endl; 语句不可以写到函数的外面 
void fun(){
	cout<<"gx01 = "<<gx<<endl; //可以在函数里直接调用global variable 
	int x=5;
	cout<<"fun:"<<x<<endl;
	gx /= 10;
	
}



int main(){
	cout<<"gx00 = "<<gx<<endl;
	gx += 200;
	fun(); 
	cout<<"gx02 = "<<gx<<endl;
	return 0;
}  //按照main的顺序走 
