# include <iostream>
using namespace std;

//public , private , protected inheritance 

class ctrl_demo{
	private:
		string id;
		void prifun(){
		}
	protected:
		void profun(){
			cout<<"a protected function"<<endl; 
		}
	public : 
		ctrl_demo(string ids ="un"):id(ids){
			cout<<".................. constructor.............."<<endl;
		}
		~ctrl_demo(){
			cout<<"ctrl_demo.........destructor......"<<endl;
		}
		void showinfo(){
			cout<<endl<<id<<endl;
		}
		 
};

class subc_demo:public ctrl_demo{ //subc是ctrl的子类 
	private:
		string father;
		void sprifun(){
			profun();//父类protected √ 
			//prifun();//父类private × 
			showinfo();//父类public √ 
		}
	protected:
		void sprofun(){
			profun();//父类protected √ 
			//prifun();//父类private × 
			showinfo();//父类public √ 
		}
	
	
};


class subsubc_demo:public subc_demo{
	private:
		string gradfather;
	protected:
		void ssprofun(){
			profun();//父类protected √ 
			//prifun();//父类private × 
			showinfo();//父类public √ 
		} //没问题 
		
};

int main(){
	ctrl_demo cd1;
	subc_demo scd1;
	
	scd1.showinfo();
	cd1.showinfo();
	
	return 0;
} 
