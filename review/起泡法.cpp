# include <iostream>
using namespace std;
//���ݷ� 

int main(){
	int a[10];
	for(int i=0;i<10;i++){
		cin>>a[i];
	} //��ʼ������ 
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10-i;j++){ //����forѭ�� 
			int temp;
			if(a[j]>a[j+1]){
				temp = a[j];a[j] = a[j+1];a[j+1]=temp;
			}
		}
	} 
	
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
		} 
	
	
	return 0;
}
