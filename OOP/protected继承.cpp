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

class subc_demo:protected ctrl_demo{ //subc��ctrl������ 
	private:
		string father;
		void sprifun(){
			profun();//����protected �� 
			//prifun();//����private �� 
			showinfo();//����public �� 
		}
	protected:
		void sprofun(){
			profun();//����protected �� 
			//prifun();//����private �� 
			showinfo();//����public �� 
		}
	
	
}; //protected�̳аѸ����pub��protected�����protected������scd1�����ⲿ����showinfo�����ˣ������������á�
 
class subsubc_demo:public subc_demo{ //subc��ctrl������ 
	private:
		string father;
		void sprifun(){
			profun();//����protected �� 
			//prifun();//����private �� 
			showinfo();//����public �� 
		}
	protected:
		void sprofun(){
			profun();//����protected �� 
			//prifun();//����private �� 
			showinfo();//����public �� 
		}
	
	
};

int main(){
	ctrl_demo cd1;
	subc_demo scd1;
	
    //scd1.showinfo();������ 
	cd1.showinfo();
	
	return 0;
} 
