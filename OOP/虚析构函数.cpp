# include <iostream>
using namespace std;


class demo{
	public:
		int i;
		demo(int i =1){
			this->i = i; 
			cout<<i<<"  demo constructor....."<<endl;
		}
		virtual ~demo(){ //�������������� 
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
	demo *pt = new sub_demo;//ָ��ָ��������� 
	cout<<"******"<<endl;
	delete pt; //����12��
	//�����12�в���virtual��sub_demo���ڴ治�ᱻ�ͷ� 
	
	return 0;
} 
