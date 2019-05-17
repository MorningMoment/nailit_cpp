#include <iostream>
using namespace std;

int main(){
	char ch;
	int x;
	
	cin>>ch;
	cout<<ch<<endl;
	
	//'a'~'z'
	
	if(ch>='a' && ch<='z'){
		cout<<"this is in range"<<endl;
		cout<<"num is "<<(int)ch<<endl;
		ch = ch + ('A'-'a'); //Ð¡Ð´±ä´óÐ´
		cout << "the bigger one is "<<ch<<endl; 
	} 
	else if(ch >='0' && ch<='9'){
		x = (ch - '0')*10;
		cout<<x<<endl;
	}
	else cout<<"out of range"<<endl;
	
}

//a+1 = b
// 3 - '0' = 3
	
