# include <iostream>
# include <cstring>
using namespace std;

int main(){
	// Q1 五种初始化赋值方法 
	string str1("Hello, C++"),str2="Hello, C++",str3 = str1,str4(str1),str5;
	int count =0;
	str5 = str1;
	// Q2 打印str1第三个字符 
	cout<<str1[2]<<endl;
	//Q3 输入一行字符串并赋值给str2 
	getline(cin,str2);
	cout<<str2<<endl;
	//Q4 输入一行字符串并赋值给str3， 并判断str2和str3的大小 
	getline(cin,str3);
	cout<<str3<<endl;
	if(str2>str3) cout<<"bigger"<<endl; 
	
	//Q5 把str2和str3相加，赋值给str4，输出str4和 
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
	 
