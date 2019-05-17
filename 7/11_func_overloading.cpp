# include <iostream>
# include <cstring>
using namespace std;

//同名的函数，不同的参数 
//不能定义同样的函数，同样顺序、个数和类型的参数，但是return的结果不一样 
//不是通过返回值类型，而是参数！！参数！！ 

string getmax(string x,string y){
	return  x.size()>y.size()?x:y; //注意函数开头应该是string 
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

//上面两个是可以区分的 

int main(){
	cout<<getmax("this","is")<<endl; //调用第一个getmax 
	cout<<getmax(1,2)<<endl; //调用第二个getmax 
	cout<<getmax(1,"hello")<<endl;
	cout<<getmax("hello",2)<<endl;
	
	return 0;
} 
