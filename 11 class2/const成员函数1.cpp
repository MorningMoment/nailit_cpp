# include <iostream>
using namespace std;

class condemo{
	public :
		condemo(int xnum = 0, int ynum = 1):x(xnum), y(ynum){//必须要用初始化列表定义 
//			x= xnum; y= ynum; // 不行，会报错 
		} 
		
		void fun(){
//			x = 10; 会报错 
//			y = 20; 可以，不会报错 ，可以对数据成员进行修改。 
//			confun();  可以调用const函数 
			cout<<"common function"<<endl;
		}
		
		void confun()const{
//			y = 30;  会报错，不能再const定义的函数里，不能对数据成员进行修改 
//			fun();  不可以调用，因为fun() 中可能会对数据成员进行修改，这样const函数就间接对数据成员进行修改了。 
			cout<<"const function"<<endl;
		}
		
		void outdef()const; //类内声明 
		
	private:
		const int x;
		int y;
		
		 
};

void condemo::outdef()const{ //类外定义 
	cout<<"what ever"<<endl;
}


int main(){
	const condemo cd1;
//	cd1.fun(); 会报错，上一行声明了const的类，只能调用const函数
	cd1.outdef();
 	
 	condemo cd2;
	cd2. fun(); //可行。 
	
	return 0;
} 
