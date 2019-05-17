# include <iostream>
using namespace std;

class date{
	public:
		friend void showdate(date d); 
		friend class time;
		date(int year, int month, int day){
			this -> year = year;
			this -> month = month;
			this -> day = day;
		}
	private : 
		int year,month,day; 
};

class time{
	public :
		void shownow(date d){

			cout<<d.year<<"/"<<d.month<<"/"<<d.day<<"/ "<<hour<<":"<<minute<<":"<<second<<endl;
		}
		time(int hour, int minute, int second){
			this -> hour = hour;
			this -> minute = minute;
			this -> second = second;
		}
	private:
		int hour, minute,second;
		

}; 


void showdate(date d){
	cout<<"year = "<<d.year;
	cout<<" month = "<<d.month;
	cout<<" day = "<<d.day;
	cout<<endl;
}

int main(){
	date d1(2019,12,10);
	time t1(12,10,13);
	t1.shownow(d1);
}
