# include <iostream>
# include <cmath>
using namespace std;

class demo{
	private:
		int *pt;//��ָ�� 
	public:
		demo(int *p){
			pt = p; //���������������� 
		}  //������� 
		
		
		~demo(){
			//cout<<*pt<<endl;
			delete pt;
		}
		
		void setpt(int x){
			*pt = x;
		}
		
	 	void showpt(){
	 		cout<<pt<<endl;
		 }
};

int main(){
	int x = 10;
	int *xpt = &x;
	demo d1(xpt),d2(&x);
	d1.setpt(20);
	d1.showpt();
	d2.showpt(); //�����ĵ�ַ��һ���� 
	cout<<x<<endl;
	
	//cout<<*xpt<<endl; 
	
	
	return 0;
} 
