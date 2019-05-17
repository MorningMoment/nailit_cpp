#include <iostream>
using namespace std;

int main(){
	int x[5];
	int *pt = x;
	cout <<pt<<endl;
	
	
	for(int i=0;i<5;i++){
		cin>>*pt;
		pt++;
	} 
	
	cout<<pt<<endl;
	
	pt=x; // important 
	for(int i=0;i<5;i++){
		cout<<*pt<<" ";
		pt++;
	}
	
	
	return 0;
} 
