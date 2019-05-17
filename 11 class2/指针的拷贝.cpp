# include <iostream>
# include <cmath>
using namespace std;

int main(){
	int x;
	int *xpt;
	//cout<<*xpt<<endl; //&空指针不指向任何存储空间，取值会崩溃 
	
	xpt = &x; //指向一个已有的变量 
	cout<<*xpt<<endl;
	
	int *ypt = new int; //指向一个动态分配的空间 
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
