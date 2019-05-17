#include <iostream>
using namespace std;
#define LEN 7
int main(){
	int ia[10]; //ia 是一个整型数组，10是长度，下标是0~9
	
	int ib[5] = {1,2,3,4,5}; //ib[0] ~ ib[4]
	for(int i=0;i<5; i++){
		cout<<ib[i]<<endl;
	} 
	
	
	int ic[]={1,2,3,4}; //不初始设定 size 
	int id[10]={2,3,4,5}; // 不给够size的值
	//int ie[2]={2,3,4}; 会报错 
	
	int ih[LEN];
	
	const int len=5;
	int ig[len]; //合法的 
	
	//int n;
	//int ij[n]; 不合法的 
	
	return 0;
} 
