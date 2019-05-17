# include <iostream>
# include <cmath>
using namespace std;

class demo{
	private:
		int *pt;//空指针 
	public:
		demo(int *p){
			pt = new int; //给指针分配空间
			*pt = *p; //这个做法是没有问题的 ，值的赋值 
		}  //千万注意这个部分 
		
		
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
	d1.showpt(); //两个的地址是不一样的
	 
	d2.showpt();
	cout<<x<<endl;
	
	//cout<<*xpt<<endl; 
	
	
	return 0;
} 
