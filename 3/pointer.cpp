#include <iostream>

using namespace std;

int main(){
	int *p1;
	cout<<"p1 = "<<p1<<endl;
	
	int i = 3, j =33 ;
	p1 = &i; //p1 ָ�� i�� ��i�ĵ�ַ����p1
	cout<<"p1="<<p1<<" &i="<<&i<<endl; //��������Ķ��ǵ�ַ 
	cout<<"*p1="<<*p1<<" i="<<i<<endl;//*p1ָ���ڵ��Ǵ��ֵ 
	
	*p1=5;
	cout<<"p1="<<p1<<" &i="<<&i<<endl; //��������Ķ��ǵ�ַ,��ַ���� 
	cout<<"*p1="<<*p1<<" i="<<i<<endl;//*p1ָ���ڵ��Ǵ��ֵ��i��*p1���仯�� 	 
	
	p1=&j; //�������� 
	cout<<"p1="<<p1<<" &i="<<&i<<endl; //��������Ķ��ǵ�ַ 
	cout<<"*p1="<<*p1<<" i="<<i<<endl;//*p1ָ���ڵ��Ǵ��ֵ
	
	i = 9;
	*p1=55;
	cout<<"*p1="<<*p1<<" j="<<j<<endl;//*p1ָ���ڵ��Ǵ��ֵ
	
	return 0;
} 
