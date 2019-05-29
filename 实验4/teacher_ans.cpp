# include <iostream>
# include <cstring>
using namespace std;

class teacher{
	private:
		const string id; //类外定义的时候，一定要用初始化列表初始化 
		const string name;
		string department;
	public:
		teacher() ; //无参 
		//teacher(string ids = "T000", string nm = "un", string dp = "cs"); //有参无参合一 
		teacher(string ids, string nm , string dp );//有参 
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
	teacher t2("t0002","jer","vs"); //可以不全部写吗？ 
	return 0;
}
