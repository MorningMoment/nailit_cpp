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

class subc_demo:private ctrl_demo{ //private�̳� 
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
	public:
		void show(){
			cout<<"anyway"<<endl;
		} 
	
}; //protected�̳аѸ����pub��protected�����protected������scd1�����ⲿ����showinfo�����ˣ������������á�
 
class subsubc_demo:public subc_demo{ //subc��ctrl������ 
//	private:
//		string father;
//		void sprifun(){
//			profun();//error
//			//prifun();//error 
//			showinfo();//error 
//		}
//	protected:
//		void sprofun(){
//			profun();//error
//			//prifun();//error
//			showinfo();//error
//		}
	public:
		void showshow(){
			//showinfo();error����Ϊ���װ�showinfo���private�� 
			show();
		}
	
};

int main(){

	
	return 0;
} 
