//输出平方在1000内的正整数
#include <iostream>
using namespace std;

int main(){
	int i=1,j=1;//变量初始化
	while(i<10){
		j=1; //****每一个while前面都要有变量初始化 *** 
		while(j<10){
		cout<<i<<'*'<<j<<'='<<i*j<<'\t';
		j++;
		}
		cout<<endl;
		i++;
	}
		
	} 
	
	//while(int i=0){
		//cout<<i
	}
	//根本不会循环，因为i=0 == false
	
	 //while(int i=4){
		//cout<<i
		//i=0 
	}
	//会循环无限次，因为每次回来都会初始化i=4 
