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
	showdate(d1); //	public: friend void showdate(date d); 如果没有这一条，不能访问。 
//	cout<<d1.year; //private 不能被访问调用 
	
	return 0;
} 
