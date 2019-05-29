# include <iostream>
using namespace std;
//起泡法 

int main(){
	int a[10];
	for(int i=0;i<10;i++){
		cin>>a[i];
	} //初始化数组 
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10-i;j++){ //两层for循环 
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
