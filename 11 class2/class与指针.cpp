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
		
		point():x(1),y(1){
			//cout<<"point constructed"<<endl<<endl;
		} 
//		~point(){
//			cout<<"point destructed         ";
//			cout<<"x = "<<x<<" y = "<<y<<endl<<endl; 
//		}
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

int main(){
	cout<<"******************** ָ��ع� **********************"<<endl; 
	int x =5;
	int *xpt; // int *xpt = &x;
	xpt = &x;
	
	*xpt = 10;
	cout<<x<<endl;
	cout<<xpt<<endl; 
	cout<<"******************** �ع˽��� **********************"<<endl; 
	
	point p1(1,2),p2(2,3);
	
	point *pt = &p1;
	pt -> set(1.2,5.6); //ָ��ָ���Ա���� 
	pt -> showpoint();//(*pt).showpoint(); //p1.showpoint() �������ǵȼ۵� 
	
	cout<<"******************** ��ָ̬�� **********************"<<endl; 
	int *ypt = new int; //ָ��һ���Լ��Ŀռ䣻
	*ypt = 50; //ֱ�Ӹ�ֵ��
	cout<<*ypt<<endl; 
	delete ypt; //Ҫ���գ���new������� 
	
	cout<<"before: "<<ypt<<endl;
	ypt = &x;
	cout<<"after: "<<ypt<<endl<<endl;
	
	cout<<"******************** class�Ķ�ָ̬�� **********************"<<endl; 
	point *pt1 = new point(); //��������������пղεĳ�ʼ������ 
	pt1->set(1.2,3.4);
	pt1->showpoint();
	delete pt1; //��һ��new�Ͷ�Ӧһ��delete
	
	point *pt2 = new point(2,3);
	pt2 -> set(5,6);
	pt2->showpoint();
	delete pt2; 
	
	
} 

