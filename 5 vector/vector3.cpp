#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main(){
	vector <string> v2;
	string s;
	while(cin>>s){
		if(v2.empty()){
		cout<<"v2 is empty"<<endl;
		}else{
		cout<<"v2 is of size "<<v2.size()<<endl;
		cout<<"v2.cap: "<<v2.capacity()<<endl; //ÈÝÁ¿ÊÇ2µÄÃÝ 
		}
		v2.push_back(s);
	}
	

	
	
	
	
	return 0;
} 
