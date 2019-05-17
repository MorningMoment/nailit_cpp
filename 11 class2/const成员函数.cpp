# include <iostream>
using namespace std;

class birthday{
	public : 
		birthday(int y=2017, int m=7, int d=7):year(y),month(m),day(d){
		}; //常数据成员必须用初始化列表初始化，必须要初始化，不要漏掉花括号 
		
		void showdate(){
			cout<<year<<'/'<<month<<'/'<<day<<endl;
		}  //如果把这个函数注释掉才会运行下一个函数 
		
		void showdate()const{ //是showdate的重载函数 
//			regday = 12 ;  会报错 
			cout<< "whatever"<<endl;
		}

	private: 
		const int year, month, day;
		int regdaya; 
};

int main(){
	birthday b1; //会优先选择非const的函数运行 
	b1.showdate();
	return 0;
}

