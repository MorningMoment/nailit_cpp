# include <iostream>
using namespace std;

int main(){
	int a = 42;
	int c = 15; 
	int &b = a; //注意语法，这说明b和a是一个东西，地址是一样的 
	cout<<&a<<endl;
	cout<<&b<<endl;
	a = 43;
	cout<<a<<" "<<b<<endl;
	//int &b = c; //报错，一旦bind就不能改变bind的对象；。	
		
	return 0;
}
