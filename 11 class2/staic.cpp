# include <iostream>
using namespace std;

class staticdemo{
	public : 
		static int stx;
		int comx;
		 
		void show(){
			cout<<"stx = "<<stx<<endl;
			cout<<"comx = "<<comx<<endl;
			cout<<"pristx = "<<pristx<<endl;
		}
		
		staticdemo(){
			stx++; //可用于记录总共生成了多少个类 
		} 
		
		void reset_pristx(int num);  
	
		static void stfun(){
			stx = 12345; //可以，因为stx是所有类共享的 
//			comx = 54321; //不可以，因为comx是每个类自己特有的，是非static成员。 
		}
	
	private:
		static int pristx; 
};

int staticdemo::stx = 0; //类外初始化，不要忘记int 
int staticdemo::pristx = 77;
void staticdemo::reset_pristx(int num){
	stx = num;
} 


int main(){
	staticdemo sd1;
	sd1.stx = 100; //可行 
//	sd1.pristx = 200; 不能修改 
	sd1.reset_pristx(333);
	sd1.show();
	
	staticdemo sd2,sd3,sd4;
	cout<<staticdemo::stx<<endl;  //最后输出336 ，仔细琢磨 
	
	return 0;
} 
