# include <iostream>
using namespace std;

double getmax(double x, double y){
	return x>y?x:y;
}

double getsum(double x,double y){
	return x+y;
	
}

int main(){
	double a=1.2, b=2.5;	
	cout<<getmax(a,b)<<endl;
	cout<<getsum(a,b)<<endl;
	
	double (*funcmaxpt)(double x, double y);//定义一个指针指向getmax，返回一个double 
	funcmaxpt = getmax; //让这个指针指向getmax函数，funcmaxpt的返回类型和参数列表必须和getmax相同。
	//funcmaxpt = getmax; // 
	cout<<funcmaxpt(a,b)<<endl; 
	
	
	return 0;
} 
