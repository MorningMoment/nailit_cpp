# include <iostream>
# include <cmath>
using namespace std;

int main(){
	int x;
	int *xpt;
	//cout<<*xpt<<endl; //&��ָ�벻ָ���κδ洢�ռ䣬ȡֵ����� 
	
	xpt = &x; //ָ��һ�����еı��� 
	cout<<*xpt<<endl;
	
	int *ypt = new int; //ָ��һ����̬����Ŀռ� 
	*ypt = 10;
	cout<<*ypt<<endl;
	
	int *zpt = ypt;
	cout <<"*zpt ="<<*zpt<<"  zpt = "<<zpt<<"   ";
	cout<<" *ypt = "<<*ypt<<"  ypt = "<<ypt<<endl;
	
	*zpt = 100;
	cout <<"*zpt ="<<*zpt<<" zpt = "<<zpt;
	cout<<" *ypt = "<<*ypt<<" ypt = "<<ypt<<endl;
	
	
	delete ypt;
	cout <<"*zpt ="<<*zpt<<endl;
} 
