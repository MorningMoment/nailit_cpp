# include <iostream>
# include <cmath>
# include <cstring>

using namespace std;

class line{
	private:
		double *leng;
	public :
		line(double *x){
			leng = new double;
			*leng = *x;
			cout<<"construct"<<endl;
		} 
		
		line(const line &y){
			leng = new double; //ǧ��������µĿռ� 
			*leng = *y.leng;
			cout<<"construct..."<<endl;
		}
		
		~line(){
			cout<<"destr ... "<<*leng<<endl;
			delete leng;
		}
};

int main(){
	double x = 12;
	double x2 = 13;
	double *y = &x;
	double *y2 = &x2;
	line l1(y);
	line l2(y2);
	line l3 = l2;
	return 0;
}

//����ѿ������캯��ע�͵���Ȼ����main�� ���� line l3 = l2;��������Ӧ������������������û������ 
