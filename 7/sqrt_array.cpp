# include <iostream>
# include <cmath>
using namespace std;

void printarr(double a[], int len){
	for(int i=0; i<len; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}

double *sqrtarr(int a[], int len){
	//double b[len]; //Ӧ����new
	double *b = new double[len]; //��һ���������һ�У�Ϊʲô���У� 
	for (int i=0; i<len; i++){
		b[i] = sqrt(a[i]);
	}
	cout<<"yes"<<endl;
	printarr(b,len);
	return b;
}

int main(){
	int a[] = {1,2,3,4};
	double *c = sqrtarr(a,4);
	for(int i=0;i<4;i++){
		cout<<c[i]<<' ';
	}
	cout<<endl;
	cout<<"this is to divide"<<endl;
	//printarr(c,4);
	return 0;
} 
