# include <iostream>
using namespace std;

class date{
	public:
		friend void showdate(date d); 
	private : 
		int year,month,day;
		
		 
};


void showdate(date d){
	cout<<"year = "<<d.year;
	cout<<" month = "<<d.month;
	cout<<" day = "<<d.day;
	cout<<endl;
}

int main(){
	date d1;
	showdate(d1); //	public: friend void showdate(date d); ���û����һ�������ܷ��ʡ� 
//	cout<<d1.year; //private ���ܱ����ʵ��� 
	
	return 0;
} 
