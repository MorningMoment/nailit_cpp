# include <iostream>
using namespace std;

class rectangle{
	public:
		double x,y,w,h; //���ڶ��� 
		//��������ʵ�����ݳ�Ա x��y��Ϊ���ε����Ͻ�����
		//��������ʵ����������w,h��Ϊ���εĳ��� 
		rectangle1(double x, double y); //�������������ⶨ�� 
		rectangle(){ //�޲εĹ��캯�� ������һ��Ҫ���죬��Ϊ֮���ٶ����޲ε�complex��ᱨ�� 
			this->x = 0;
			this->y = 0;
			this->w = 1;
			this->h = 1;
		}
		
		rectangle(double a,double b,double c,double d){ //�вεĹ��캯�� 
			this->x = a;
			this->y = b;
			this->w = c;
			this->h = d;
		}
		
		void show(){
			cout<<'('<<x<<','<<y<<','<<w<<','<<h<<')'<<endl;
		}
		
		void move(double offsetx, double offsety){ //����Լ�����ı仯 
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
	cout<<x<<' '<<y<<endl; //�������������ⶨ�壬���ھ��� 
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
	r1.rectangle1(1,2); //�������ⶨ��ĺ��� 
	return 0;
} 
