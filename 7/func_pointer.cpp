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
	
	double (*funcmaxpt)(double x, double y);//����һ��ָ��ָ��getmax������һ��double 
	funcmaxpt = getmax; //�����ָ��ָ��getmax������funcmaxpt�ķ������ͺͲ����б�����getmax��ͬ��
	//funcmaxpt = getmax; // 
	cout<<funcmaxpt(a,b)<<endl; 
	
	
	return 0;
} 
