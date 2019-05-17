//while写任意数字的累加和 
#include <iostream>
using namespace std;

int main(){
	int num,max,cnt=0,sum=0;
	double avg;
	cin>>num;
	if(max<num) max=num;
	sum = sum + num;
	cnt++;
	
	while(cin>>num){
		if(max<num) max=num;
		sum = sum + num;
		cnt++;
	}
	
	avg = sum*1.0/cnt;
	
	cout<<"sum ="<<sum<<endl;
	cout<<"avg ="<<avg<<endl;
	cout<<"max ="<<max<<endl;
	
	return 0;
} 
