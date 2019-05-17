#include <iostream>

using namespace std;

int main(){
	short svar1,svar2;
	short *spvar = &svar1;
	svar1 = 123;
	cout<<"spvar = "<<spvar<<" &svar1 = "<<&svar1<<endl;
	cout<<"*spvar = " <<*spvar<<" svar1 = "<<svar1<<endl<<endl; 
	
	svar1 = 100;
	cout<<"spvar = "<<spvar<<" &svar1 = "<<&svar1<<endl;
	cout<<"*spvar = " <<*spvar<<" svar1 = "<<svar1<<endl<<endl; 	
	
	spvar = &svar2;
	svar2 = 1010;
	cout<<"spvar = "<<spvar<<" &svar1 = "<<&svar1<<endl;
	cout<<"*spvar = " <<*spvar<<" svar1 = "<<svar1<<endl<<endl; 
	
	return 0;
} 
