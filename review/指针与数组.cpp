# include <iostream>
using namespace std;

int main(){
	int a[] = {1,9,3,4,5};
	
	//两种相同的赋值方式 
	int *p = a;
	int *q = &a[0];
	
	cout<<p<<" "<<q<<endl; 
	
	cout<<p+1<<" "<<q+1<<endl;
	
	cout<<"*p+1 = "<<*p+1<<"  *(p+1) = "<<*(p+1)<<"  p[1] = "<<p[1]<<endl; 
	cout<<"*p++ = "<<*p++<<"  *(p++) = "<<*(p++)<<endl; //++优先级在*前 
	
	return 0;
}
