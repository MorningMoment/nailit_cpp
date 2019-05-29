# include <iostream>
using namespace std;


void showarray(int *a,int size){ //形参是指针 
//void showarray(int a[],int size){ 两种方式皆可 

	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
} 
int a[10] = {1,2,3,4,5,6,7,8,9,10}; 

int main(){
	showarray(a,10); //实参是数组 
	
	return 0;
}
