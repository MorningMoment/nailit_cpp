# include <iostream>
# include <cmath>
using namespace std;

class demo{
	private:
		int *pt;//空指针 
	public:
		demo(int *p){
			pt = p; //这个做法是有问题的 
		}  //这里改了 
		
		
		~demo(){
			//cout<<*pt<<endl;
			delete pt;
		}
		
		void setpt(int x){
			*pt = x;
		}
		
	 	void showpt(){
	 		cout<<pt<<endl;
		 }
};

int main(){
	int x = 10;
	int *xpt = &x;
	demo d1(xpt),d2(&x);
	d1.setpt(20);
	d1.showpt();
	d2.showpt(); //两个的地址是一样的 
	cout<<x<<endl;
	
	//cout<<*xpt<<endl; 
	
	
	return 0;
} 
