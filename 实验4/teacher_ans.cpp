# include <iostream>
# include <cstring>
using namespace std;

class teacher{
	private:
		const string id; //���ⶨ���ʱ��һ��Ҫ�ó�ʼ���б��ʼ�� 
		const string name;
		string department;
	public:
		teacher() ; //�޲� 
		//teacher(string ids = "T000", string nm = "un", string dp = "cs"); //�в��޲κ�һ 
		teacher(string ids, string nm , string dp );//�в� 
		~teacher(); 
}; 


teacher::teacher():id("T000"),name("un"){
	this->department = "cs";
	cout<<"default constructor...."<<endl; 
}

teacher::teacher(string ids, string nm, string dp):id(ids),name(nm){
	this->department = dp;
	cout<<"customized constructor...."<<endl;
}

teacher::~teacher(){
	cout<<id<<" "<<name<<" "<<department<<endl;
}  


int main(){
	teacher t1;
	teacher t2("t0002","jer","vs"); //���Բ�ȫ��д�� 
	return 0;
}
