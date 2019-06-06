# include <iostream>
using namespace std;


class demo{
	public:
		int i;
		demo(int i =1){
			this->i = i; 
			cout<<i<<"  demo constructor....."<<endl;
		}
		virtual ~demo(){ //析构函数变成虚的 
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

int main(){
	demo *pt = new sub_demo;//指针指向子类对象 
	cout<<"******"<<endl;
	delete pt; //看第12行
	//如果第12行不加virtual，sub_demo的内存不会被释放 
	
	return 0;
} 
