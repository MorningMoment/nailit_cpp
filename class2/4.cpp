# include <iostream>
using namespace std;

class account{
	public : 
		string id;
		string name;
		double balance;
		
		account(string id, string name, double balance){
			this -> id = id;
			this -> name = name;
			this -> balance = balance;
		}
		
		void deposit(double bal){
			balance += bal;
			cout << "save:"<< bal<<endl;
			cout << "amout:"<<balance<<endl<<endl;
			
		}
	private:
		double balance; //������a1.balance = 10000; �����Ĳ��������С�
		//ֻ��ͨ��deposit���߳�ʼ���ķ�ʽ�޸�balance
		//���޸Ľ���һ�������ơ� 
};


int main(){
	account a1("a00023","zhou",1000);
	a1.deposit(12);
	a1.deposit(-100);
	
	
	return 0;
} 
