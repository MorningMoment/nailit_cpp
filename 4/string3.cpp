# include <iostream>
# include <cstring>
using namespace std;

int main(){
	string s1;
	cout<<"s1 empty? "<< s1.empty()<<endl; //�ж��Ƿ�Ϊ�� 
	
	getline(cin,s1);
	cout<<"s1= "<<s1<<endl;
	cout<<"s1 empty? "<< s1.empty()<<endl;
	cout<<"s1 size? "<< s1.size()<<endl; //�ж��ַ������� 
	
	}
	 
