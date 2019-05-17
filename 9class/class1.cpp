# include <iostream>
using namespace std;

class circle{
	public:
		double x,y,r;
		circle(){
			x = 0;
			y = 0;
			r = 1;
		}
		circle (double xnum,double ynum,double rnum){
			x = xnum;
			y = ynum;
			r = rnum;
		}
		
		void showinfo(){
			cout<<'('<<x<<','<<y<<','<<r<<')'<<endl; 
		}
		
		double area(){
			return 3.14*r*r;
		}
		
		bool isbigger(circle c){
			return r>c.r; //和另一个circle比较 
	 	}
}; 

int main(){
	circle c1(1,1,2);
	c1.showinfo(); 
	cout<< c1.area()<<endl;
	circle c2(1,1,1.5);
	cout<< c1.isbigger(c2)<<endl;
	return 0;
}  
