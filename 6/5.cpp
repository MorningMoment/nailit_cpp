# include <iostream>
using namespace std;

int main(){
	bool bv = true;
	cout<<"bv= "<<bv<<endl;
	
	bool bv1 = !bv;
	cout<<"bv1= "<<bv1<<endl;
	
	int x,y,z;	
	cout>>"enter x,y,z:">>endl; 
	cin>>x>>y>>z;
	bv = x;
	bv1 = !x; 
	cout<<"bv= "<<bv<<endl;
	cout<<"bv1 = "<<bv1<<endl;
	
	if(x==y && y==z) cout<<"x=y=z"; //不能连续写等号或者不等号，必须要用&&连接 
	if(x!=y && x!=z && y!=z) cout<<"x!=y!=z";
	
	return 0;
} 
