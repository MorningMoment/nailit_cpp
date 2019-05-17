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
	
	//求x,y,z最大值
	
	if (x>y) max = x;
	else max = y;
	
	if(max>z) max = max;
	else max = z;
	
	max = x>y?(x>z?x:z):(y>z?y:z); //如果x大，比较x和z； 如果y大，比较y和z 
	
	return 0;
} 
