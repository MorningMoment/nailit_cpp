# include <iostream>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	//cout<<s.size();
	for(int i=0;i<s.size();i++){
		cout<<s[i]<<" * ";
	} //��������� 
	return 0;
}
