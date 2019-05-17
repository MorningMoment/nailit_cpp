#include <iostream>
using namespace std;

int main(){
	float x[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
	float y[3][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			y[j][i] = x[i][j] ;
		}
	}
	

	for(int j=0;j<3;j++){
		for(int i=0;i<4;i++){
			cout<<y[j][i]<<" ";
		}
		cout<<endl;
	}
			
	return 0;
} 
