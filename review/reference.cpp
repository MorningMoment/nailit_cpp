# include <iostream>
using namespace std;

int main(){
	int a = 42;
	int c = 15; 
	int &b = a; //ע���﷨����˵��b��a��һ����������ַ��һ���� 
	cout<<&a<<endl;
	cout<<&b<<endl;
	a = 43;
	cout<<a<<" "<<b<<endl;
	//int &b = c; //����һ��bind�Ͳ��ܸı�bind�Ķ��󣻡�	
		
	return 0;
}
