#include <iostream>

using namespace std;

int main(){
	const int len = 6;
	int temp;
	int x[10] = {9,8,5,4,2,0} ;//10: ����ĳ��ȱ����Ƕ�ֵ
	for(int i=0;i<len-1;i++){
		for(int j=0;j<len-1-i;j++){
			if(x[i]>x[i+1]){
				temp = x[i+1];
				x[i+1] = temp;
				x[i] = temp;
			}
		}
		for(int i=0;i<len;i++){
		 cout<<x[i]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<len;i++){
		 cout<<x[i]<<" ";
	}
	return 0;
} 
