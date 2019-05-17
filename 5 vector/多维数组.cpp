#include <iostream>
using namespace std;

int main(){
	int x[3][4]={0,1,2,3,4,5,6,7,8,9,10,11}; 
	int y[3][4]={{0},{1},{2}};
	int z[3][4]={1,2,3,4,5,6};
	
	int s[3][5]={12,3,4,1,2,4,5,3,1,4,2,4,2,1,4};
	string name[3] = {"st1","st2","st2"}; //求每个学生的最高分，最低分 
	
	int max,min;
	double sum=0,avg;
	

	for(int i=0;i<3;i++){
		max =s[i][0];
		min = s[i][0]; 
		sum = 0;//千万不要忘记把初始化放进循环里 
		for(int j=0;j<5;j++){
			if(s[i][j]>max) max= s[i][j];
			if(s[i][j]<min) min= s[i][j];
			sum = sum+s[i][j];
		}
		avg = sum/5;
		cout<<name[i]<<" :"<<max<<" "<<min<<" "<<avg<<endl;
	}
	
	return 0;
} 
