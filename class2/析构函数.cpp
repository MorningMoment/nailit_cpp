# include <iostream>
using namespace std;

class point{
	public :
		double x, y;
		point(double xnum = 0, double ynum = 0){
			x = xnum;
			y = ynum;
		}
		
		~point(){
			cout<<".............destructor"<<endl;
		}
} ;
	
int main(){
	point p1;
	return 0;
}
