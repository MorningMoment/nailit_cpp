# include <iostream>
# include <cstring>
using namespace std;

int main(){
	
	string s1; //s1 是空值 
	s1 = "hello";
	string s2(s1);
	//string s2 = s1;
	string s4("morning");
	string s5 = "noon";
	string s6(6,'c'); //只能是char而不是string 
	
	cout<<"s2 "<<s2<<" ###"<<endl;
	cout<<"s4 "<<s4<<" ###"<<endl;
	cout<<"s5 "<<s5<<" ###"<<endl;
	cout<<"s6 "<<s6<<" ###"<<endl;
	
	return 0;
}
