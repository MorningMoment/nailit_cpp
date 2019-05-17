# include <iostream>
using namespace std;

class ctrldemo{
	public :
		int pubvar;
		void pubfun(){
			cout<<"pubfun...."<<pubvar<<endl; 
			show();
			protfun(); //protected 可以在类里面进行调用。 
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
//	d2.pubvar = 15; //public ,不是main函数也能调用。 
//	d2.pubfun();
//}

int main(){
//	usec();
	
	ctrldemo cd1;
	cd1.pubvar = 12;
	cd1.pubfun();
//	cd1.protfun(); 类定义以外不可以用protected里的
 
//	
	
	return 0;
} 
