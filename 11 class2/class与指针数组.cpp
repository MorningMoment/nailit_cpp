# include <iostream>
# include <cmath>
using namespace std;

class point{
	private:
		double x,y;
		static int cnt;
	public : 
		point(double x1,double y1):x(x1),y(y1){
			cnt ++;
			cout<<"point constructed"<<endl<<endl;
		}
		
		point():x(1),y(1){
			cnt ++;
			cout<<"point constructed"<<endl<<endl;
		} 
//		~point(){
//			cout<<"point destructed         ";
//			cout<<"x = "<<x<<" y = "<<y<<endl<<endl; 
//		}
		void showpoint(){
			cout<<"x = "<<x<<" y = "<<y<<endl; 
			cout<<"count = "<<cnt<<endl;
		}
		void set(double a, double b){
			x = a;
			y = b;
		}
		double distance(point point1){
			double dis = sqrt(pow(x-point1.x,2)+pow(y-point1.y,2));
			return dis;
		}
		 
};

int point::cnt = 0;


int main(){
	cout<<"1******************"<<endl;
	point *p1 = new point(1,2);
	p1 -> showpoint();
	delete p1;
	
	cout<<"2******************"<<endl;
	
	point *pa = new point[3];
	pa->set(1,10);
	pa->showpoint();
	pa[0].showpoint(); 
	
	
	
	cout<<"3******************"<<endl;
	point *pb = pa;
	pb++;
	pb->showpoint(); 
	
	delete []pa;
return 0; 
} 
