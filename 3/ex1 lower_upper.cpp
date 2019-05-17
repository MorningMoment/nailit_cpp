#include <iostream>
using namespace std;


int main(){
	char ch,ch_b;
	cin>>ch;
	if(ch<='z'&& ch>='a'){
		cout<<"the lower case is: "<<ch<<endl;
		ch_b = ch+('A'-'a'); //必须要赋值到一个新的char型变量上，不能直接跟在cout后边 
		cout<<"the upper case is: "<<ch_b<<endl;
	}
	
	return 0;
}

void fun(){
	char ch='\0'; //ch是空值 
	cout<<"****"<<ch<"&&&&"<<endl;
	
} 
