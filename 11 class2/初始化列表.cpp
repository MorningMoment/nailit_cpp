# include <iostream>
using namespace std;

class date{
	public : 
//		date():year(2019),month(7),day(7) 无参的构造函数
//		date(int y):year(y),month(7),day(7) 有参的构造函数 
	 	date(int y = 2019, int m = 7, int d = 7):year(y),month(m),day(d){
//	 		year = y; month = m, day = d;
		 }
		void showdate(){
			cout<<year<<'/'<<month<<'/'<<day<<endl;
		} 
	private: 
		const int year, month, day;
		};
int main(){
	date b1;
	b1.showdate();
	return 0;
}
 

