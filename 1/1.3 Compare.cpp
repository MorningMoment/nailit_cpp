#include <iostream>
using namespace std;

int main(){
	int num,sum = 0, max = 0;
	double avg; //��������Ϊdouble�� 
	
	
//	cin>>num;
//	sum = sum + num;
	
	for(int i=0; i<10; i++){
		cin>>num; //ÿһ�ζ����Լ�����ģ���֮ǰ����ıȽϣ�������������� 
		sum = sum + num;
		if (i==0) max = num;
		else if(max<num) max = num;	
	}
	
	avg = sum/10.0; //������������Ľ��һ�������������������һ����������ʽ���˫���� 
	
	cout<<"sum = "<<sum<<endl;
	cout<<"max ="<< max<<endl;
	cout<<"avg ="<< avg<<endl;
} 
// һ���ǵ÷ֺ� 
