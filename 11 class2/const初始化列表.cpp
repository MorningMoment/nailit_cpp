# include <iostream>
using namespace std;

class birthday{
	public : 
		birthday(int y=2017, int m=7, int d=7):year(y),month(m),day(d){
		}; //常数据成员必须用初始化列表初始化，必须要初始化，不要漏掉花括号 
		void showdate(){
			cout<<year<<'/'<<month<<'/'<<day<<endl;
		} 
//		void setyear(int whatever){
//			year = whatever; error, 不能被修改 
//		}
	private: 
		const int year, month, day;
};

int main(){
	birthday b1;
	b1.showdate();
	return 0;
}

