# include <iostream>
using namespace std;

class date; //1) 声明被用的class 
class time{
	public :
		void showthistime(date d); //类内声明 函数 
		time(int hour, int minute, int second){
			this -> hour = hour;
			this -> minute = minute;
			this -> second = second;
		}
	private:
		int hour, minute,second;
		
}; 



class date{ //
	public:
		friend void showdate(date d); 
		friend void time::showthistime(date d); //3) 说明是友元 
		date(int year, int month, int day){
			this -> year = year;
			this -> month = month;
			this -> day = day;
		}
	private : 
		int year,month,day; 

};

		
void time::showthistime(date d) {
 	cout<<d.year<<"/"<<d.month<<"/"<<d.day<<" "<<hour<<":"<<minute+13<<":"<<second<<endl;  
 } //4）必须类外定义 




int main(){
	date d1(2019,12,10);
	time t1(12,10,13);
	t1.showthistime(d1);
}
