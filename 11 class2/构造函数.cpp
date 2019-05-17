# include <iostream>
using namespace std;

class date{
	public : 
//      函数重载实现的构造函数 
//		date(){
//			year = 2019;
//			month = 7;
//			day = 7;
//		} 
//		date(int year, int month, int day){
//			this ->year = year;
//			this ->month = month;
//			this ->day = day;
//		}

//     函数的默认参数
 		date(int y = 2019, int m = 7, int d = 7){
			this ->year = y;
			this ->month = m;
			this ->day = d;
		 } 
		void printdate();
	private:
		int year, month, day;
		 
};

void date::printdate(){
	cout<<"year/ month/ day "<<year<<" "<<month<<" "<<day<<endl;
}


int main(){
	date d1; //无参，不要带括号
	date d2(2017,7,7) ;
	d1.printdate();
	d2.printdate();
	return 0;
} 
