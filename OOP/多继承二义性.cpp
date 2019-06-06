# include <iostream>
using namespace std;

class mother{
	public:
		string na;
		mother(string nas = "chinese"):na(nas){
			cout<<"......constructor ******"<<endl;
		}
		~mother(){
			cout<<"......destructor*****"<<endl;
		}
		void sing(){
			cout<<"AAAAAAAAAAAAA"<<endl;
		}
}; 

class father{
	public:
		string na;
		father(string nas = "US"):na(nas){
			cout<<"......constructor ******"<<endl;
		}
		~father(){
			cout<<"......destructor*****"<<endl;
		}
		void sing(){
			cout<<"oooooooooo"<<endl;
		}
};

class son:public father, public mother{ //¶à¼Ì³Ð 
	
};


int main(){
	son s1;

//	cout<<s1.na<<endl; //ambiguous

	cout<<s1.father::na<<endl;
	s1.mother::sing();
	
	return 0;
} 
