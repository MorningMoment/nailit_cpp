# include <iostream>
using namespace std;


int main(){
	void getMax(double x, double y,double z);
	double a,b,c;
	cin>>a>>b>>c;
	
	getMax(a,b,c);
	
	cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl; //�ᷢ��getmax���������û�иı� a,b,c��ֵ 
	return 0;
} 

void getMax(double x, double y,double z){
	
	double max = x<y ? x:y;
	max = max>z?max:z;
	cout<<"max = "<<max<<endl;
	x+=10;
	y+=10;
	z+=10;
} 
