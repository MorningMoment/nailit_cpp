# include <iostream>
using namespace std;

int main(){
	int x,y,k;
	cin>>x>>y;
	// x>y: x*y , else x*y
	if(x>y) x=x+y;
	else x = x*y ;
	
	k = x>y?x+y:x*y; 
	cout<<k<<endl;
	
	//��x,y,z���ֵ
	
	if (x>y) max = x;
	else max = y;
	
	if(max>z) max = max;
	else max = z;
	
	max = x>y?(x>z?x:z):(y>z?y:z); //���x�󣬱Ƚ�x��z�� ���y�󣬱Ƚ�y��z 
	
	return 0;
} 
