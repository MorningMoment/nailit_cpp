# include <iostream>
# include <cmath>
using namespace std;

class point{
	private:
		double x,y;
	public : 
		point(double x1,double y1):x(x1),y(y1){
			cout<<"point constructed"<<endl<<endl;
		}
		~point(){
			cout<<"point destructed         ";
			cout<<"x = "<<x<<" y = "<<y<<endl<<endl; 
		}
		void showpoint(){
			cout<<"x = "<<x<<" y = "<<y<<endl; 
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

class triangle{
	private:
		point a,b,c;
		
	public:
		
		triangle(point p1,point p2,point p3):a(p1),b(p2),c(p3){ //必须要用初始化列表 
			 //a = p1; b=p2; c = p3; 这样不行 
			 cout<<"triangle constructor ..."<<endl;
		}
		~triangle(){
			cout<<"triangle destructor ..."<<endl; 
		}
		void show(){
			cout<<"triangle's points:"<<endl;
			a.showpoint();
			b.showpoint();
			c.showpoint();

		} 
		bool is_isosceles(){
			double ab = a.distance(b),bc = b.distance(c),ac = a.distance(c);
			return ab==bc || ab==ac || bc==ac;
		} 
		
		bool is_right(){
			double ab = a.distance(b),bc = b.distance(c),ac = a.distance(c);
			bool yesno = pow(ab,2) == pow(ac,2)+pow(bc,2)||pow(ac,2) == pow(bc,2)+pow(ab,2)||pow(bc,2) == pow(ab,2)+pow(ac,2);
			return yesno;
		}
		
};

int main(){
	point p1(1,2),p2(3,4),p3(0,0);
	cout<<endl<<"1*****************"<<endl;
	triangle t1(p1,p2,p3);
	
	cout<<t1.is_isosceles()<<endl;
	cout<<endl<<"2*****************"<<endl;
	p1.set(12,13); //不太懂析构函数的调用过程 
	return 0;
	
	}
	
	

