# include <iostream>
# include <cstring>
using namespace std;

int main(){
	string s1;
	getline(cin,s1);
	if (s1.empty()){
		cout<<"s1 is empty"<<endl;
	} else{
		cout<<"s1 is not empty, the size is: "<<s1.size()<<endl;
	}
	
	
	cout<<"the number 3 of s1 is *** "<<s1[3]<<" ***"<<endl;
	cout<<"the ascii: of no 3 of s1 is *** "<<(int)s1[3]<<" ***"<<endl; 
	
	//还有code 不想打了，看图片。 
	
	
	return 0;
	
	}
	 
