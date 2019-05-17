#include <iostream>
using namespace std;

int main(){
	int num, sum=0, max, cnt = 0;
	double avg;
	
	cin>>num;
	sum = sum+num;
	if(max<num) max=num;
	cnt++;
	
	while(cin>>num){ //输入结束作为终止的条件 
		sum = sum+num;
		if(max<num) max=num;
		cnt++;
	}
	
	avg = sum*1.0/cnt;
	
	cout<<"sum ="<<sum<<endl;
	cout<<"avg ="<<avg<<endl;
	cout<<"max ="<<max<<endl;
	return 0;
	}
	
	//输入数字，摁ctrl+z，再摁回车 
