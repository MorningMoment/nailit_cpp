#include <iostream>
using namespace std;

int main(){
	const int len = 6;
	int x[10] = {9,8,5,4,2,0,15,1,2,5} , temp;//10: ����ĳ��ȱ����Ƕ�ֵ
	
	int *pt1 = &temp;
	int *pt2;
	pt2 = &temp;
	
	temp = 5;
	*pt1 = 10;
	cout<<*pt1<<" "<<*pt2<<" "<<temp<<endl;
	
	pt1 = &x[0];
	cout<<*pt1<<" "<<x[0]<<endl; //���x[0]��ֵ 
	cout<<pt1<<" "<<&x[0]<<endl; //���x[0]�ĵ�ַ 
	cout<<"x="<<x<<endl; //�����ֱ��cout��������Ԫ�صĵ�ַ 
	
	//ʵ���ϣ�
	// int *pt1;
	// pt1 = x; ( == > pt1=&x[0]  )
	// int *pt2 =x; int *pt2 =&x[0] 
	
	pt1 = &x[3];
	cout<<*(pt1+5)<<endl; //ָ���ƶ�,���ָ��Ĳ��� 
	cout<<*(pt1)+2<<endl; //���ָ��ָ���ֵ���еĲ��� 
	cout<<"pt1 = "<<pt1<<endl<<" *pt1 = "<<" "<<*pt1<<endl<<endl; 
	
	
	*pt1 = *pt1 + 6; //ָ�뱾���ǲ����� 
	cout<<"*pt1 = *pt1 + 6 >>"<<pt1<<" "<<*pt1<<endl; 
	pt1 = pt1 + 1;
	cout<<"pt1 = pt1 + 1 >>"<<pt1<<" "<<*pt1<<endl; 
	return 0;
} 
