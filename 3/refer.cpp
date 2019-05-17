#include <iostream>

using namespace std;

int main(){
	int x = 100;
	int y = x; //赋值
	
	cout<<"x=" <<x<<" y="<<y<<endl;
	y+=100;
	cout<<"x=" <<x<<" y="<<y<<endl; //x,y会不同。 
	
	int &refx = x ;
	cout<<"x=" <<x<<" refx="<<refx<<endl;
	x*=10;
	cout<<"x=" <<x<<" efx="<<refx<<endl;
	refx+=50;
	cout<<"x=" <<x<<" refx="<<refx<<endl;
	
	return 0;
} 
