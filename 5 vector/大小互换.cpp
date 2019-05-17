#include <iostream>

using namespace std;

int main(){
	int xa[10] = {2, 4, 11, 4, 6, 3, 7, 2, 7, 9};
	for(int temp,i=1;i<8;i++){
		if(xa[i]>xa[i+1]) {
		temp = xa[i];
		xa[i] = xa[i+1];
		xa[i+1] = temp;
		}

	} 
	for(int i=0;i<=9;i++){
		cout<<xa[i]<<endl;
	}

} 
