# include <iostream>
using namespace std;

void fun(){
	static int x=5; //static 使局部变量的值变化后得到保留，第二次调用的时候，X==5*5 而不是 x = 5 
	cout<<"_______fun "<<x<<endl;
	x*=5;
} 

void fun_notstatc(){
	int x = 5;
	cout<<"____funnotstatc"<<x<<endl;
	x*=5;
}

int main(){
	fun();
	cout<<"__________"<<endl;
	fun();
	cout<<"__________"<<endl;
	fun_notstatc();
	cout<<"__________"<<endl;
	fun_notstatc();
	return 0;
} 
