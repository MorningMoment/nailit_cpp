# include <iostream>
using namespace std;

double getmax(double x, double y){
	return x>y?x:y;
}

double getsum(double x,double y){
	return x+y;
}

void process(double (*fpt)(double, double), double x, double y){ //函数指针，函数的实参，都作为大函数的参数 
	cout<<fpt(x,y)<<endl;
}

int main(){
	double a=1.2, b=3.4;
	process(getsum, a,b); // fpt = getsum, x=a , y=b
	
	return 0;
} 
