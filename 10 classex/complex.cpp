//����һ�������� 
# include <iostream>
using namespace std;

class complex{
	public : // һ��Ҫдpublic
	//��������ʵ�����ݳ�Աrealʵ����image�鲿 ʵ��==double
		double real, image;
	
	
	complex(){ //�޲εĹ��캯����û�з������ͣ�����Ҫ����һģһ�� 
		real = 0;
		image = 1;
		cout<<"complex constructor..."<<endl; //��main�е��� complex c1ʱ����Զ������������ 
	}
	
	complex(double x, double y){ //���ع��캯�� ��Ҫд����double��ÿһ��������Ҫ�������͡� 
		real = x;
		image = y;
		cout<<"complex constructor..."<<endl;
	} 
	
	complex(double x){ //���ع��캯�� 
	real = x;
	image = 1;
	cout<<"complex constructor..."<<endl;
	} 
	
	
	void show(){ //�����ӡ������Ϣ�ĳ�Ա����
		if(image == 0){ //public �еĶ���������Ҫ������������������ֱ�ӵ��á� 
			cout<<real<<endl;
		}
		else if(image < 0){
			cout<<real<<image<<'i'<<endl;
		}
		else{
			cout<<real<<'+'<<image<<'i'<<endl;
		}
	} 
	
	//����ʵ������һ������ӡ������ˡ��� 
	
	complex plus(complex c){ //����һ��complex���͵ı������� ����complex���� 
		complex ans;
		ans.real = this->real + c.real;
		ans.image = this->image + c.image; //����ֱ��д�� image +c.image 
		return ans ;
	}
	
	
};


int main(){
	complex c1; //�޲�����ʱ�򣬶��岻Ҫд���š� 
	c1.show();
	//��������cout<<c1<<endl; 
	// ������ c1.complex(2) ����ֵ 
	complex c2(1,-2);
	c2.show();
	complex c3(1.5);
	c3.show();
	
	complex c5(10,20),c6(2,12);
	complex c4 = c5.plus(c6); //Ҫ�ȶ������ 
	cout<<"what ever"<<endl;
	c3.plus(c5).show(); //���ﻹ�����һ��complex���캯��
	 
	 
	
	return 0;
} 
