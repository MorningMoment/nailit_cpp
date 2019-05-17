# include <iostream>
using namespace std;

int main(){
	int a,b,c;
	int x = (a=1, b=2, c=3);
	cout<<"x="<<x<<endl;
	
	int y;
	y = (a++,b+5,c+6) ;
	cout<<"y="<<y<<endl;
	
	a=1, b=2, c=3;
	int z;
	z = (a++, b+5+a,a+b+c+6);
	cout<<"z= "<<z<<endl; //attention: a = 2 , b没有被赋值。 
	return 0;
} 
