#include <iostream>

using namespace std;

int main(){
	int xa[10], min, max;
	
	cin>>xa[0];
	min = xa[0];//��ֵ��ʼ�� 
	max = xa[0];
	
	for(int i=0;i<10;i++){
		cin>>xa[i];
		if(max<xa[i]) max = xa[i]; //ѭ����������ֵ 
		if(min>xa[i]) min = xa[i];
	}
	for(int i=9;i>=0;i-=2){
		cout<<xa[i]<<endl;
	}
	cout<<"min xa "<<min<<endl;
	cout<<"max xa "<<max<<endl;
	return 0;
} 
