# include <iostream>
using namespace std;

class ctrldemo{
	public :
		int pubvar;
		void pubfun(){
			cout<<"pubfun...."<<pubvar<<endl; 
			show();
			protfun(); //protected ��������������е��á� 
		} 
		
		void show(){
			cout<<"**** to show ****"<<endl;
		} 
	
	protected :
		int protvar;
		void protfun(){
			cout<<"protected......."<<endl;
			 
		}
};

//int usec(){
//	ctrldemo d2;
//	d2.pubvar = 15; //public ,����main����Ҳ�ܵ��á� 
//	d2.pubfun();
//}

int main(){
//	usec();
	
	ctrldemo cd1;
	cd1.pubvar = 12;
	cd1.pubfun();
//	cd1.protfun(); �ඨ�����ⲻ������protected���
 
//	
	
	return 0;
} 
