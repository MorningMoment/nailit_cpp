# include <iostream>
# include <cstring>
using namespace std;

//ͬ���ĺ�������ͬ�Ĳ��� 
//���ܶ���ͬ���ĺ�����ͬ��˳�򡢸��������͵Ĳ���������return�Ľ����һ�� 
//����ͨ������ֵ���ͣ����ǲ��������������� 

string getmax(string x,string y){
	return  x.size()>y.size()?x:y; //ע�⺯����ͷӦ����string 
} 

double getmax(int x,int y){
	return x>y?x:y;
}

double getmax(int x, string y){
	return x>y[0]?x:y[0];
} 

double getmax(string a, int b){
	return a[0]>b?a[1]:b;
}

//���������ǿ������ֵ� 

int main(){
	cout<<getmax("this","is")<<endl; //���õ�һ��getmax 
	cout<<getmax(1,2)<<endl; //���õڶ���getmax 
	cout<<getmax(1,"hello")<<endl;
	cout<<getmax("hello",2)<<endl;
	
	return 0;
} 
