# include <iostream>
# include <cstring>
using namespace std;

int main(){
	
	string s1; //s1 �ǿ�ֵ 
	s1 = "hello";
	string s2(s1);
	//string s2 = s1;
	string s4("morning");
	string s5 = "noon";
	string s6(6,'c'); //ֻ����char������string 
	
	cout<<"s2 "<<s2<<" ###"<<endl;
	cout<<"s4 "<<s4<<" ###"<<endl;
	cout<<"s5 "<<s5<<" ###"<<endl;
	cout<<"s6 "<<s6<<" ###"<<endl;
	
	return 0;
}
