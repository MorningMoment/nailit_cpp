# include <iostream>
using namespace std;

int main(){
	int i =1;
	bool m = i++==1;
	i = 1;
	bool n = ++i==1;
	cout<<" i = 1"<<endl;
	cout<<"i++==1 : "<<m<<endl; //True 把==左边看成一个整体 
	cout<<"++i==1 : "<<n<<endl; //False 
	
	i = 1;
	int j = ++i;
	cout<<" i = "<<i<<" j = "<<j<<endl;
	return 0;
}
