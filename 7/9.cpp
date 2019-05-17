# include <iostream>
using namespace std;

void printstars(); 
void reverse(double i); //声明的时候要注明变量类型 
double reverse1(double i); 

double i;
int main(){
	cin>>i;
    printstars();
    reverse(i); //有输出 
    reverse1(i+1); //不会有输出
	cout<<reverse1(i+1); //有输出 
	// cout<<reverse(i); 会有error 
	return 0;
}

void printstars(){
	cout<<"************"<<endl;
	
}  

void reverse(double i){
	if(i!=0) cout<<(1/i)<<endl;
	else cout<<"error"<<endl;
}

double reverse1(double i){
	double ans;
	if(i!=0) {
		ans = 1/i;
	}
	else cout<<"error"<<endl;
	return ans; //返回变量的类型必须和返回声明的类型一致 
}
