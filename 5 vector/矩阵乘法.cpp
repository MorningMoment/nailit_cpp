#include <iostream>
using namespace std;

int main(){
	int a[3][2]={1,2,3,4,5,6};
	int b[2][4]={3,4,5,6,7,8,10,12};
	int z[3][4]; //ά���趨һ��Ҫ׼ 
	
	
	for(int i=0;i<3;i++){ //int ��Ҫ�� 
		for(int j=0;j<4;j++){ 
			z[i][j] = 0; //ÿһ�ֵ���ǰ��� ��i,j��ȷ����λ 
			for(int k=0;k<2;k++){ 
				z[i][j] += a[i][k]*b[k][j];
			}
			
		}
	} 
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<z[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}  
