#include <iostream>
using namespace std;
int main(){
	int x, y; //������������
	cout<<"please input:";
	cin>>x>>y; //�Ѽ�������Ķ����ŵ�x��y��
	cout<<"x+y="<<(x+y)<<endl; 
	cout<<"x-y="<<(x-y)<<endl;
	if(y!=0)
		cout<<"x/y="<<(x/y)<<endl;
	else
		cout<<"y is zero! error";
	
	return 0;
} 

