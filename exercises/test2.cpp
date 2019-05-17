#include <iostream>
#include<math.h>
using namespace std;

int main(){
	int i=1; 
	double pi_4 = 0;
	while(1*1.0/i>pow(0.1,8)){
		pi_4 += pow(-1,i+1)*1.0/(2*i-1);
		i++;
	}
	cout<<4.0*pi_4<<endl;
	
return 0;
}
