# include <iostream>
using namespace std;

void arrprint(double x[], int len){
	for(int i=0;i<len;i++){
		cout<<x[i]<<' ';
	}
	cout<<endl;
}

//参数是数组指针和数组长度 
double *arraycopy(double x[],int len){
	// double y[len]; //系统分配空间，函数return的时候自动回收 
	double *y = new double[len]; //只能手动回收（手动分配空间） 
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
//	double b[] = a; 这样会报错
 
//	double a[] = {1,2,3,4};
//	double b[] = {};
//	b = a; 报错 
	double a[] = {1,2,3,4};
	double *b;
	b = arraycopy(a,4);
	cout << "b="<<b<<endl;
	delete[] b; //手动释放空间 
	double *c = arrtimes(a,4);
	
	//上一条命令和下两条一起执行是一样的 
//	arrtimes(a,4);
//	double *c = a;
	
	return 0;
} 

/*
returntype *funcn_name(arr_type arr_name, int len){
	return arr_name or pointer //似乎这俩return是一样的 
}
*/

