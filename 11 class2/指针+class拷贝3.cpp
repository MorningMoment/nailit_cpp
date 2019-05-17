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
		
		demo(const demo &obj){
			//pt = obj.pt;不能这样
			pt = new int; //给指针分配空间 
			*pt = *obj.pt; //值的赋值 
		} 
		
		~demo(){
			//cout<<*pt<<endl; 
			delete pt; //delete会delete两次 ？ 
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
	d2.showpt();
	cout<<x<<endl;
	
	//cout<<*xpt<<endl; 
	
	
	return 0;
} 

