#include <iostream>
using namespace std;
#define LEN 7
int main(){
	int ia[10]; //ia ��һ���������飬10�ǳ��ȣ��±���0~9
	
	int ib[5] = {1,2,3,4,5}; //ib[0] ~ ib[4]
	for(int i=0;i<5; i++){
		cout<<ib[i]<<endl;
	} 
	
	
	int ic[]={1,2,3,4}; //����ʼ�趨 size 
	int id[10]={2,3,4,5}; // ������size��ֵ
	//int ie[2]={2,3,4}; �ᱨ�� 
	
	int ih[LEN];
	
	const int len=5;
	int ig[len]; //�Ϸ��� 
	
	//int n;
	//int ij[n]; ���Ϸ��� 
	
	return 0;
} 
