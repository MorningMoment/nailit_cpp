#include <iostream>
using namespace std;

int main(){
	const int len = 6;
	int x[10] = {9,8,5,4,2,0,15,1,2,5} , temp;//10: 数组的长度必须是定值
	
	int *pt1 = &temp;
	int *pt2;
	pt2 = &temp;
	
	temp = 5;
	*pt1 = 10;
	cout<<*pt1<<" "<<*pt2<<" "<<temp<<endl;
	
	pt1 = &x[0];
	cout<<*pt1<<" "<<x[0]<<endl; //输出x[0]的值 
	cout<<pt1<<" "<<&x[0]<<endl; //输出x[0]的地址 
	cout<<"x="<<x<<endl; //数组的直接cout是数组首元素的地址 
	
	//实际上：
	// int *pt1;
	// pt1 = x; ( == > pt1=&x[0]  )
	// int *pt2 =x; int *pt2 =&x[0] 
	
	pt1 = &x[3];
	cout<<*(pt1+5)<<endl; //指针移动,针对指针的操作 
	cout<<*(pt1)+2<<endl; //针对指针指向的值进行的操作 
	cout<<"pt1 = "<<pt1<<endl<<" *pt1 = "<<" "<<*pt1<<endl<<endl; 
	
	
	*pt1 = *pt1 + 6; //指针本身是不会变的 
	cout<<"*pt1 = *pt1 + 6 >>"<<pt1<<" "<<*pt1<<endl; 
	pt1 = pt1 + 1;
	cout<<"pt1 = pt1 + 1 >>"<<pt1<<" "<<*pt1<<endl; 
	return 0;
} 
