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
	
	if(x==y && y==z) cout<<"x=y=z"; //��������д�ȺŻ��߲��Ⱥţ�����Ҫ��&&���� 
	if(x!=y && x!=z && y!=z) cout<<"x!=y!=z";
	
	return 0;
} 
