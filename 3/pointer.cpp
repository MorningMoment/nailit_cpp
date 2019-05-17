#include <iostream>

using namespace std;

int main(){
	int *p1;
	cout<<"p1 = "<<p1<<endl;
	
	int i = 3, j =33 ;
	p1 = &i; //p1 指向 i， 把i的地址赋给p1
	cout<<"p1="<<p1<<" &i="<<&i<<endl; //两个输出的都是地址 
	cout<<"*p1="<<*p1<<" i="<<i<<endl;//*p1指所在的是存的值 
	
	*p1=5;
	cout<<"p1="<<p1<<" &i="<<&i<<endl; //两个输出的都是地址,地址不变 
	cout<<"*p1="<<*p1<<" i="<<i<<endl;//*p1指所在的是存的值，i和*p1都变化。 	 
	
	p1=&j; //换了主人 
	cout<<"p1="<<p1<<" &i="<<&i<<endl; //两个输出的都是地址 
	cout<<"*p1="<<*p1<<" i="<<i<<endl;//*p1指所在的是存的值
	
	i = 9;
	*p1=55;
	cout<<"*p1="<<*p1<<" j="<<j<<endl;//*p1指所在的是存的值
	
	return 0;
} 
