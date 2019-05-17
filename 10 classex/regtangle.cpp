# include <iostream>
using namespace std;

class rectangle{
	public:
		double x,y,w,h; //类内定义 
		//定义两个实数数据成员 x，y作为矩形的左上角坐标
		//定义两个实数数据类型w,h作为矩形的长宽 
		rectangle1(double x, double y); //类里声明，类外定义 
		rectangle(){ //无参的构造函数 。几乎一定要构造，因为之后再定义无参的complex类会报错。 
			this->x = 0;
			this->y = 0;
			this->w = 1;
			this->h = 1;
		}
		
		rectangle(double a,double b,double c,double d){ //有参的构造函数 
			this->x = a;
			this->y = b;
			this->w = c;
			this->h = d;
		}
		
		void show(){
			cout<<'('<<x<<','<<y<<','<<w<<','<<h<<')'<<endl;
		}
		
		void move(double offsetx, double offsety){ //针对自己本身的变化 
			this->x += offsetx;
			this->y += offsety;
		}
		
		double getcir(){
			return 2*(w+h);
		}
		
		double getarea(){
			return w*h;
		}
		
		bool in_rect(double x,double y){
			if(x>this->x and x<this->x+this->w and y<this->y and y>this->y-this->h){
				return 1;
			}
			else{
				return 0;
			}
		} 
		
		rectangle union_rec(rectangle r){
			rectangle ans;
			ans.x =x<r.x?x:r.x;
			ans.y =y>r.y?y:r.y;
			double rx = (x+w)>(r.x+r.w)?(x+w):(r.x+r.w);
			double ry = (y+h)<(r.y+r.h)?(y+h):(r.y+r.h);
			ans.w = rx - ans.w;
			ans.h = ry - ans.y;
			return ans;
		} 
		
		
			rectangle intersect_rec(rectangle r){
			rectangle ans;
			if(r.in_rect(x,y)||r.in_rect(x+w,y)||r.in_rect(x,y-h)||r.in_rect(x+w,y-h)){
			ans.x =x>r.x?x:r.x;
			ans.y =y>r.y?y:r.y;
			double rx = (x+w)<(r.x+r.w)?(x+w):(r.x+r.w);
			double ry = (y-h)>(r.y-r.h)?(y+h):(r.y+r.h);
			ans.w = rx - ans.w;
			ans.h = ans.y - ry;
			return ans;
			}
		} 
};


rectangle::rectangle1(double x, double y){
	cout<<x<<' '<<y<<endl; //类里声明，类外定义，看第九行 
}

int main(){
	rectangle r1;
	r1.show();
	rectangle r2(1,2,3,4);
	r2.show();	
	r2.move(2,3);
	r2.show();
	cout<<r2.in_rect(3,1)<<endl;
	
	cout <<"++++++++"<<endl;
	r1.rectangle1(1,2); //调用类外定义的函数 
	return 0;
} 
