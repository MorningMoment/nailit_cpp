#include <iostream>
using namespace std;


int main(){
	char ch,ch_b;
	cin>>ch;
	if(ch<='z'&& ch>='a'){
		cout<<"the lower case is: "<<ch<<endl;
		ch_b = ch+('A'-'a'); //����Ҫ��ֵ��һ���µ�char�ͱ����ϣ�����ֱ�Ӹ���cout��� 
		cout<<"the upper case is: "<<ch_b<<endl;
	}
	
	return 0;
}

void fun(){
	char ch='\0'; //ch�ǿ�ֵ 
	cout<<"****"<<ch<"&&&&"<<endl;
	
} 
