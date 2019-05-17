#include <iostream>
using namespace std;
int main(){
	int x, y; //声明变量类型
	cout<<"please input:";
	cin>>x>>y; //把键盘输入的东西放到x，y里
	cout<<"x+y="<<(x+y)<<endl; 
	cout<<"x-y="<<(x-y)<<endl;
	if(y!=0)
		cout<<"x/y="<<(x/y)<<endl;
	else
		cout<<"y is zero! error";
	
	return 0;
} 

