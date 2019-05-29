# include <iostream>
using namespace std;

int main(){
	int c = 1;
	//int *a = c;//错
	int *a;
	a = &c; //方法1 
	//*a = c; 报错  

	int *a = &c; // 方法2 
	cout<<a<<endl;
	
	return 0;
}
