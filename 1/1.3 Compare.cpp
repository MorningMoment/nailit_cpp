#include <iostream>
using namespace std;

int main(){
	int num,sum = 0, max = 0;
	double avg; //声明变量为double型 
	
	
//	cin>>num;
//	sum = sum + num;
	
	for(int i=0; i<10; i++){
		cin>>num; //每一次都是自己输入的，和之前输入的比较，如果更大就替代。 
		sum = sum + num;
		if (i==0) max = num;
		else if(max<num) max = num;	
	}
	
	avg = sum/10.0; //两个整数运算的结果一定是整数，必须把其中一个变量的形式变成双精度 
	
	cout<<"sum = "<<sum<<endl;
	cout<<"max ="<< max<<endl;
	cout<<"avg ="<< avg<<endl;
} 
// 一定记得分号 
