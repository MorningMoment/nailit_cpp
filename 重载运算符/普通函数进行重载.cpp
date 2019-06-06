# include <iostream>
using namespace std;

class complex{
	private : 
		double real, image;
	public:
		friend complex operator+(const complex &c1, const complex &c2); //��public��������Ԫ�������б������ȫһ�¡� 
		friend bool operator>(const complex &c1, const complex &c2);
		complex(double r=0, double i=0):real(r),image(i){
			
		}
		void show(){
			cout<<real<<" "<<image<<endl;
		}
		 
};

//��ͨ���� 
//����real,image��private����ͨ��������ֱ�ӷ��� 
complex operator+(const complex &c1, const complex &c2){
	complex ans;
	ans.real = c1.real+c2.real;
	ans.image = c1.image +c2.image;
	return ans;
}

bool operator>(const complex &c1, const complex &c2){
	return c1.real>c2.real;
}


int main(){
	complex c1(1,2),c2(3,4);
	complex c4 = c1+c2;
	cout<<(c4>c1)<<endl;
	c4.show(); 
	
	return 0;
} 
