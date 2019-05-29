# include <iostream>
# include <cstring>
using namespace std;

int main(){
	int *p;//指向整数的指针 ，是一个指针 
	int (*ptr)[5]; //指向一整个数组的指针 ，是一个指针 
	int *ptrarr[5];//指针的数组 ，是一个数组 
	 
	int arr[5] = {1,2,3,4,5};
	
	p=arr;//指向arr数组头儿 
	ptr=&arr;//指向arr数组
	
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
	ptr=&arr;//ptr是一个指针，指向一整个数组 
	
	cout<<"*p = "<<*p+1<<endl; 
	
	cout<<*ptr<<" "<<endl;//第一层解锁，得到的是一个地址 
	for(int i=0;i<5;i++){
		cout<<**ptr+i<<" ";//第二层解锁，才得到值 
		
	} 
	
	return 0;
	}
	 
