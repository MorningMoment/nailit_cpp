# include <iostream>
using namespace std;


int main(){
	void getMax(double x, double y,double z); // ���������� 
	// void getMax(double, double, double); //��һ��д��

	double a,b,c;
	cin>>a>>b>>c;
	getMax(a,b,c);
	
	return 0;
} 


void getMax(double x, double y,double z){
	
	double max = x<y ? x:y;
	max = max>z?max:z;
	cout<<"max = "<<max<<endl;
	
} 
