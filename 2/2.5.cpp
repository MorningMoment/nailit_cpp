//���ƽ����1000�ڵ�������
#include <iostream>
using namespace std;

int main(){
	int i=1,j=1;//������ʼ��
	while(i<10){
		j=1; //****ÿһ��whileǰ�涼Ҫ�б�����ʼ�� *** 
		while(j<10){
		cout<<i<<'*'<<j<<'='<<i*j<<'\t';
		j++;
		}
		cout<<endl;
		i++;
	}
		
	} 
	
	//while(int i=0){
		//cout<<i
	}
	//��������ѭ������Ϊi=0 == false
	
	 //while(int i=4){
		//cout<<i
		//i=0 
	}
	//��ѭ�����޴Σ���Ϊÿ�λ��������ʼ��i=4 
