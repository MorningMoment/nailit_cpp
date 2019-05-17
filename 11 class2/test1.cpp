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
			leng = new double; //千万别忘了新的空间 
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

//如果把拷贝构造函数注释掉，然后在main里 还有 line l3 = l2;，理论上应该死掉，但是我这里没有死。 
