#include <iostream>

using namespace std;

int main(){
	char cvar1,cvar2;
	char &refvar = cvar1;
	cvar1 = 'a';
	cvar2 = 'l';
	cout << "refvar = "<<refvar<<endl;
	cout << "cvar1 = "<<cvar1<<endl;
	cvar1 = cvar2;
	cout << "refvar = "<<refvar<<endl;
	cout << "cvar1 = "<<cvar1<<endl;
	
	return 0;
} 
