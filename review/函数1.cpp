# include <iostream>
using namespace std;


void showarray(int *a,int size){ //�β���ָ�� 
//void showarray(int a[],int size){ ���ַ�ʽ�Կ� 

	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
} 
int a[10] = {1,2,3,4,5,6,7,8,9,10}; 

int main(){
	showarray(a,10); //ʵ�������� 
	
	return 0;
}
