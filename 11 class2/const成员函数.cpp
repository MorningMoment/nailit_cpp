# include <iostream>
using namespace std;

class birthday{
	public : 
		birthday(int y=2017, int m=7, int d=7):year(y),month(m),day(d){
		}; //�����ݳ�Ա�����ó�ʼ���б��ʼ��������Ҫ��ʼ������Ҫ©�������� 
		
		void showdate(){
			cout<<year<<'/'<<month<<'/'<<day<<endl;
		}  //������������ע�͵��Ż�������һ������ 
		
		void showdate()const{ //��showdate�����غ��� 
//			regday = 12 ;  �ᱨ�� 
			cout<< "whatever"<<endl;
		}

	private: 
		const int year, month, day;
		int regdaya; 
};

int main(){
	birthday b1; //������ѡ���const�ĺ������� 
	b1.showdate();
	return 0;
}

