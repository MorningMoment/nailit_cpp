# include <iostream>
using namespace std;

void arrprint(double x[], int len){
	for(int i=0;i<len;i++){
		cout<<x[i]<<' ';
	}
	cout<<endl;
}

//����������ָ������鳤�� 
double *arraycopy(double x[],int len){
	// double y[len]; //ϵͳ����ռ䣬����return��ʱ���Զ����� 
	double *y = new double[len]; //ֻ���ֶ����գ��ֶ�����ռ䣩 
	cout<< "the pointer of y: "<<endl;
	cout<< "y=" << y <<endl;
	for(int i=0;i<len;i++){
		y[i] = x[i];
	} 
	cout<<"in arrcopy: "<<endl;
	arrprint(y,len);
	
	return y;
}

double *arrtimes(double x[], int len){
	for (int i=0;i<len;i++){
		x[i] *=10;
		cout << x[i]<<' ';
	}
	cout<<endl;
	return x;
}

int main(){
 //	double a[] = {1,2,3,4};
//	double b[] = a; �����ᱨ��
 
//	double a[] = {1,2,3,4};
//	double b[] = {};
//	b = a; ���� 
	double a[] = {1,2,3,4};
	double *b;
	b = arraycopy(a,4);
	cout << "b="<<b<<endl;
	delete[] b; //�ֶ��ͷſռ� 
	double *c = arrtimes(a,4);
	
	//��һ�������������һ��ִ����һ���� 
//	arrtimes(a,4);
//	double *c = a;
	
	return 0;
} 

/*
returntype *funcn_name(arr_type arr_name, int len){
	return arr_name or pointer //�ƺ�����return��һ���� 
}
*/

