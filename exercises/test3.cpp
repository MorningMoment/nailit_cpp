#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	for(int i=2;i<num;i++){
		if(num%i==0) {
			cout<<"不是素数"<<endl;
			break ;
		}else if(i==num-1) cout<<"是素数"<<endl; 
	}
} 
