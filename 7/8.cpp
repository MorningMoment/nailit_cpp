# include <iostream>
using namespace std;

void arr10times(int a[], int len){ // a: address
	for(int i=0;i<len;i++){
		a[i]*=10;
	}
} 

void  printarr(int a[], int len){
	for(int i=0; i<len;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


int main(){
	int x[5] = {1,2,3,4,5};
	printarr(x,5);
	arr10times(x,5);
	printarr(x,5);
	return 0;
} 
