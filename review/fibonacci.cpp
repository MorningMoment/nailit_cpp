# include <iostream>
# include <iomanip>
using namespace std;

int main(){
	int a[20] = {1,1};//һ��Ҫ������size����Ȼ��õ�����ֵĽ�� 
	for(int i=0;i<20;++i){
		a[i+2] = a[i]+a[i+1];
	}           
//	cout<<sizeof(a)/sizeof(int)<<endl;                                                                                                         
	for(int i=0;i<20;i++){
		cout<<setw(8)<<a[i];
		if((i+1)%5==0) cout<<endl;
	}
	return 0;
}
