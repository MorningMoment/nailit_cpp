# include <iostream>
using namespace std;

class condemo{
	public :
		condemo(int xnum = 0, int ynum = 1):x(xnum), y(ynum){
		} 
		
		static int stx;
		
		void set(int num);
		
		void confun()const{
			cout<<stx<<endl; 
		}

	
	private:
		const int x;
		int y;	 
};

void condemo::set(int num){
	stx = num;
}




int main(){
	condemo cd1;
	cd1.set(10);
	cd1.confun(); 
} 
