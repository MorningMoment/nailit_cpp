# include <iostream>
# include <cmath>
using namespace std;

class point{
	
	private:
		double x,y;
		static int cnt; //��̬�������ڼ��� 
	public : 
		point(double x1,double y1):x(x1),y(y1){
			cnt++; //��̬������¼�ܹ��ж��ٸ��� 
			cout<<"point constructed"<<endl;
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
			cout<<"how many points: "<<cnt<<endl;
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

int point::cnt = 0; //��̬������ʼ�� 

int main(){
	point pa[3];
	cout<<endl<<"1******************"<<endl; 
	
	for(int i=0;i<3;i++){
		pa[i].set(i,i*i);
		pa[i].showpoint();
	} 
	cout<<endl<<"2******************"<<endl; 
	
	
	//point pb[3] = {1,2,3}; //�ֱ�ֵ��������x 
	// point pc[3] = {point(1),point(2),point(3)}
	//point pd[3] = {{4,4},{5,5},{6,6}}; //���������bug��������ʦ����ôд��
	point pe[3] = {point(4,4),point(5,5),point(6,6)};
	pe[2].showpoint();
	
	return 0;
} 
