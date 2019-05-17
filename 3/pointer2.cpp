#include <iostream>

using namespace std;

int main(){
	int a,b;
	int *pmax, *pmin;
	pmax = &a;
	pmin = &b;
	
	cin>>a>>b;
	
	int temp,*ptemp;
	temp = a;
//	if(a<b){
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	cout << *pmax<<" "<<*pmin<<endl;
//	cout <<"a="<<a<<" b="<<b<<endl;
//	
	
	if(*pmax<*pmin){
		ptemp=pmax;
		pmax = pmin;
		pmin = ptemp;
	}
	cout<<"pmax="<<*pmax<<endl;
	cout<<"pmin="<<*pmin<<endl; 
	cout <<"a="<<a<<" b="<<b<<endl;
	
	return 0;
} 
