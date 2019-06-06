# include <iostream>
using namespace std;

class time{
	private:
		int hour, minute, second; //注意是int 
	public : 
		time(int h=0, int m=0, int s=0){
			hour = h;
			minute = m;
			second = s;
		}
		time operator+(const time &t1){
			time ans;
			ans.second = (second + t1.second)%60;
			ans.minute = ((second+t1.second)/60+minute + t1.minute)%60;
			ans.hour = (hour+t1.hour+((second+t1.second)/60+minute + t1.minute)/60)%24;
			return ans;
		}
		
		time operator++(){ //for ++t1;
			hour = (hour+(minute+(second+1)/60)/60)%24; //顺序必须得这么写 
			minute = (minute+(second+1)/60)%60;
			second = (second+1)%60;
		} 
		
		time operator++(int){ //for t1++; 括号里加一个int 
			hour = (hour+(minute+(second+1)/60)/60)%24; //顺序必须得这么写 
			minute = (minute+(second+1)/60)%60;
			second = (second+1)%60;
		} 
		
		
		void show(){
			cout<<hour<<" : "<<minute<<" : "<<second<<endl; 
		}
		 
};


int main(){
	time t1(10,30,50),t2(20,40,20);
	time t3 = t1+t2;
	t3.show();
	++t1;
	t1.show();
//	t1++;
//	t1.show();
	
	return 0;
} 
