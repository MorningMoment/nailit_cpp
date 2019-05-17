# include <iostream>
# include <cmath>
# include <cstring>

using namespace std;

class point{
	private :
		double x,y;
		char *name;
		
		public :
			point(double x1 = 1, double y1 = 1, char *nm = "p0"){ //构造函数 
				x = x1;
				y = y1;
				name = new char[10];
				//*name = *nm; 这样是不行的
				strcpy(name,nm); 
				cout<<"constructed......  "<<x<<","<<y<<":"<<name<<endl;
				
			}
			
			point (const point &obj){
				this->x = obj.x;
				this->y = obj.y;
				this->name = new char[5];
				strcpy(name,obj.name);
				cout<<">> copy instej fewjf  "<<x<<","<<y<<":"<<name<<endl;
			}
			
			~point(){
				cout<<"destructed......  "<<x<<","<<y<<":"<<name<<endl;
				delete name; 
			}
}; 


int main(){
	point p1(2,1,"p1");
	point p2;
	point p3 = p2;
	return 0;
	
} 
