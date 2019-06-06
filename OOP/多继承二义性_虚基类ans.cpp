# include <iostream>
using namespace std;

class demo{
	public:
		int i;
		demo(int i =1){
			this->i = i; 
			cout<<i<<"  demo constructor....."<<endl;
		}
		~demo(){
			cout<<"  demo destructor......"<<endl;
		}
		void funa(){
			cout<<i<<"  >> funa is running...."<<endl;
		}
		
};

class sub_demo:virtual public demo{
	public:
		int i;
		sub_demo(int i=2):demo(i){
			this->i = i; 
			cout<<i<<"  subdemo constructor....."<<endl;
		}
		~sub_demo(){
			cout<<"  subdemo destructor......"<<endl;
		}
		void funa(){
			cout<<i<<"  >> subfuna is running...."<<endl;
		}
};

class subsub_demo:virtual public demo, public sub_demo{
	public:
		int i;
		subsub_demo(int i=3):demo(i+2),sub_demo(i+1){
			this->i = i; 
			cout<<i<<"  subsubdemo constructor....."<<endl;
		}
		~subsub_demo(){
			cout<<"  subsubdemo destructor......"<<endl;
		}
//		void funa(){
//			cout<<">> subsubfuna is running...."<<endl;
//		}
};

int main(){
	subsub_demo ssd; //demo构造函数只调用一次，对比无“ans”的cpp文件 
	ssd.demo::funa(); // class sub_demo:virtual public demo{， 所以subsub继承的时候没有继承sub里的demo，只有自己直接继承的demo。
	 
	
	
	return 0;
}
