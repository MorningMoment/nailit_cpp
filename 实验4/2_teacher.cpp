# include <iostream>
# include <cstring>
using namespace std;

class teacher{
	private:
		const long id;
		const string name;
		string department;
	public : 
		teacher(long new_id = 12345, string new_name = "default", string new_dep = "CS"):id(new_id),name(new_name),department(new_dep){
		};
		~teacher();
		 
};


teacher::~teacher(){
	cout<<"id = "<<id<<endl;
	cout<<"name = "<<name<<endl;
	cout<<"dep = "<<department<<endl<<endl;
} 


int main(){
	teacher t1(20079,"zhang","DS");
	teacher t2;
	
	return 0;
} 
