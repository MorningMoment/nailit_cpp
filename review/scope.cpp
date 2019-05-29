# include <iostream>
using namespace std;

int a = 42;

void demo(){
	cout<<"*******"<<a<<endl; //42
	int a = 16;
	cout<<"-----"<<a<<endl;//16
}
int main(){
	
	demo();
	
	cout<<a<<endl;//42
	int a = 0;
	cout<<a<<endl; //0
	cout<<::a<<endl;//42
	
	return 0;
}
