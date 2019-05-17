# include <iostream>
# include <cmath>
using namespace std;

class point{
	
	private:
		double x,y;
	public : 
		point(double x1,double y1):x(x1),y(y1){ 
			cout<<"point constructed"<<endl;
		}
		point(const point &obj){ //һ��Ҫ��& ��const˵���ڿ������캯���ﲻ���Ըı�Դpoint 
			x = obj.x;
			y = obj.y; //����Ҫ�����������ܿ�����ȥ 
			cout<<">>copy point constructer"<<endl;
		} 
		point():x(1),y(1){
			cout<<"point constructed"<<endl;
		}
		point(double x1):x(x1),y(1){
			cout<<"point constructed"<<endl;
		}
		
		~point(){
			cout<<"point destructed         ";
			cout<<"x = "<<x<<" y = "<<y<<endl<<endl; 
		}
		void showpoint(){
			cout<<"x = "<<x<<" y = "<<y<<endl; 
		}
		double distance(point point1){
			double dis = sqrt(pow(x-point1.x,2)+pow(y-point1.y,2));
			return dis;
		}
		
		double newdistance(point &p1){ //���ô��� ��point &p = p2,û�п������������� 
			double dis = sqrt(pow(x-p1.x,2)+pow(y-p1.y,2));
			return dis;
		} 
	
};

int main(){
	point p1,p2(2,3);
	
	cout<<endl<<"1*************"<<endl; //���ÿ������캯���ĵ�һ����� 
	point p3 = p2; //�����ʼ����ʱ�򣬰���һ������ֵ�������ͻ�����¶���Ŀ������캯����p3�Ĺ��캯���� 
	//��û��point(const point &obj)��������������construct������deconstruct
	
	//��������� point(const point &obj)���������ǡ�ǳ������
	//�Լ�������point(const point &obj)������������� 
	
	cout<<endl<<"2*************"<<endl; //���ÿ������캯���ĵڶ������ 
	cout<<p1.distance(p2)<<endl; //point object��Ϊ������ֵ���ݣ�ע�⣬ֵ��������ʱ�򣬵��ÿ������캯��  
	//ԭ������distance���������õ� point p = p2�� ��p.copy(p2) 
	
	cout<<endl<<"3*************"<<endl; 
	cout<<p1.newdistance(p2)<<endl<<endl<<endl;  //���ô��ݣ�û�е��ÿ������캯����Ҳû������������ 
	
} 
