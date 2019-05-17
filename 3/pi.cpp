#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double pi,pidiv4=0;
	int i=1;
	
	while(1/i>pow(10,-6)){
		pidiv4 = pidiv4 + pow(1,i-1)/(2*i-1);
		i++;
	}
	pi = pidiv4*4;
	cout << pi<<endl;
	return 0;
} 
