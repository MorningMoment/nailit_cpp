#include <iostream>
#include <cstring>
using namespace std;

char* greeting(char* name){
	char* ch = new char[10];
	strcpy(ch,"Hello, ");
	return strcat(ch, name);
	 
}

char* saybye(char* name){
	char* ch = new char[10];
	strcpy(ch,", see you later");
	return strcat(ch, name);
}

