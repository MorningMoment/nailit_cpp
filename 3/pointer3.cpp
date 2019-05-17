#include <iostream>

using namespace std;

int main() {
	int x,y;
	double &yy=y; //error, 类型不同（double，int）

	int *xp = &x;
//	int *xp;
//	xp = &x; 和上一句是等价的


	double *yp = &y;//error, 类型不同（double,int）

	int *px;
	//cout<<*p1<<endl;
	//*p1 =5 ; 两行都是空指针，指向不知名空间，会报错。

	//解决方案(1)：
	px = &x; //指向一个变量

	//解决方案(2):
	px = new int; //向系统申请一个存储int的空间，“new”创造一个整数空间。
	*px = 5;
	cout << "px=" <<px<<endl; //地址
	cout << "*px="<<*px<<endl; //存储的值，=5
	
	delete px; //把申请的空间删掉 

	return 0;
}
