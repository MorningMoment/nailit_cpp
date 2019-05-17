#include <iostream>
using namespace std;

int main(){
	double dvar[5] = {1,2,3,4,5};
	double *pt,sum=0;
	//cin>>dvar;
	for(int i=0;i<=4;i++){
		pt = &dvar[i];
		sum+=*pt;
		cout<<"*pt = "<<*pt<<endl;
	}
	cout<<"sum = "<<sum<<endl;
	return 0;
} 
