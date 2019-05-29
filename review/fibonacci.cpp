# include <iostream>
# include <iomanip>
using namespace std;

int main(){
	int a[20] = {1,1};//一定要先声明size，不然会得到很奇怪的结果 
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
