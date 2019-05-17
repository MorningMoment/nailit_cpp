#include <iostream>
#include <cstring>
using namespace std;

class account{
		//(5)
	private:
		const long id;
		const string name;
		double balance;
		
	public:
		//(2)
		account(long i=12345,string n="zhou",double b=700):id(i),name(n),balance(b){
		}
		
		//(3)
		~account(){
			cout<<endl<<"***********destructor***********"<<endl;
			cout<<"id = "<<id<<" /// ";
			cout<<"name = "<<name<<" /// ";
			cout<<"balance = "<<balance<<endl;
				}
		
		//(4)
		void save(double num){
			balance += num;
		}
		
		void take(double num){
			balance -= num;
		}
		
		//(6) **error**
//		void setname(string newname){
//			name = newname; //error
//		}
		

	//	(7)
		bool isbigcustomer()const;
		void showaccount()const;
		void showaccount();
};

//(7)
bool account::isbigcustomer()const{
	if(balance>=100000) return true;
	else return false;
}

//(9)
void account::showaccount()const{
	cout<<"this is a const func"<<endl;
	cout<<id<<endl;
}

void account::showaccount(){
	cout<<"this is not a const func"<<endl;
	cout<<id<<endl;
}


int main(){
	
	//(5)
	account a1;
	account a2(12347,"ming",200000);
	a1.take(10000); // good 
	
	
	//(8)
	const account a3(12348,"sen",1000);
	cout<<"a3? "<<a3.isbigcustomer()<<endl;
	cout<<"a1? "<<a1.isbigcustomer()<<endl;
	
	//(9),(10)
	a3.showaccount(); //重载的话，优先调用const函数
	
	//(11) **error**
	//a3.save(100); error 

	return 0;
}
