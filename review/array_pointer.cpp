# include <iostream>
# include <cstring>
using namespace std;

int main(){
	int *p;//ָ��������ָ�� ����һ��ָ�� 
	int (*ptr)[5]; //ָ��һ���������ָ�� ����һ��ָ�� 
	int *ptrarr[5];//ָ������� ����һ������ 
	 
	int arr[5] = {1,2,3,4,5};
	
	p=arr;//ָ��arr����ͷ�� 
	ptr=&arr;//ָ��arr����
	
	for(int i=0;i<5;i++){
		ptrarr[i] = &arr[i];
		cout<<ptrarr[i]<<" ";
	} 
	cout<<endl;
	
	cout<<"p = "<<p<<"  ptr = "<<ptr<<endl;
//	p++;ptr++;
//	cout<<" p++;ptr++; " <<endl;
//	cout<<"p = "<<p<<"  ptr = "<<ptr<<endl;
	
	cout<<endl<<"********************"<<endl<<endl;
	
	
//	int (*ptr)[5];
	ptr=&arr;//ptr��һ��ָ�룬ָ��һ�������� 
	
	cout<<"*p = "<<*p+1<<endl; 
	
	cout<<*ptr<<" "<<endl;//��һ��������õ�����һ����ַ 
	for(int i=0;i<5;i++){
		cout<<**ptr+i<<" ";//�ڶ���������ŵõ�ֵ 
		
	} 
	
	return 0;
	}
	 
