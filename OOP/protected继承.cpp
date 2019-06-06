# include <iostream>
using namespace std;

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

class subc_demo:protected ctrl_demo{ //subc是ctrl的子类 
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
	
	
}; //protected继承把父类的pub和protected都变成protected。所以scd1不能外部调用showinfo（）了，但是子孙能用。
 
class subsubc_demo:public subc_demo{ //subc是ctrl的子类 
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

int main(){
	ctrl_demo cd1;
	subc_demo scd1;
	
    //scd1.showinfo();不能用 
	cd1.showinfo();
	
	return 0;
} 
