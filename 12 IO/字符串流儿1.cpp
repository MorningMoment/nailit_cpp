# include <iostream>
# include <sstream>
using namespace std;

int main(){
	string str = "hello 123 45.6 789"; //不能改成别的间隔，只能是空格 
	istringstream mysin(str); //声明了这个就可以当做cin来用
	 
	
	string s1;
	mysin>>s1;
	cout<<s1<<endl; //把hello取出来了
	
	int ivar;
	mysin>>ivar;
	cout<<ivar<<endl;  //取出第一个int ，把string里的内容变成int 
	
	double dvar;
	mysin>>dvar;
	cout<<dvar<<endl; //取出第一个double 把string里的内容变成double 
}
