# include <iostream>
# include <cstring>
using namespace std;

int main(){
	// Q1 ���ֳ�ʼ����ֵ���� 
	string str1("Hello, C++"),str2="Hello, C++",str3 = str1,str4(str1),str5;
	int count =0;
	str5 = str1;
	// Q2 ��ӡstr1�������ַ� 
	cout<<str1[2]<<endl;
	//Q3 ����һ���ַ�������ֵ��str2 
	getline(cin,str2);
	cout<<str2<<endl;
	//Q4 ����һ���ַ�������ֵ��str3�� ���ж�str2��str3�Ĵ�С 
	getline(cin,str3);
	cout<<str3<<endl;
	if(str2>str3) cout<<"bigger"<<endl; 
	
	//Q5 ��str2��str3��ӣ���ֵ��str4�����str4�� 
	str4 = str2 + str3;
	cout<<str4<<endl<<"the length is "<<str4.size()<<endl;
	
	//Q6 
	getline(cin,str5);
	cout<<str5<<endl;
	cout<<"Is str5 empty? "<<str5.empty()<<endl;
	for(int i=0;i<str5.size();i++){
		if(isspace(str5[i])!=0){
			count++;
		}else{
		str5[i] = toupper(str5[i]);}
	}
	cout<<str5<<endl;
	cout<<"the num of space is "<<count<<endl;
	
	return 0;
	}
	 
