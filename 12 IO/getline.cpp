# include <iostream>
using namespace std;

int main(){
//	double x,y;
//	cin>>x;
//	y = x*x;
//	cout<<y;
//	
//	string s1,s2;
//	cin>>s1;
//	cout<<s1<<endl;
////	y = s1*s1; 报错，因为s1是字符串
//	getline(cin,s2);
//	cout<<endl<<s2<<endl; 
//	
	//***********
	
	char *p1,*p2;
	p1 = new char[10];
	cin.getline(p1,15,'#'); //不会报错诶, 最后会取14位 , 如果不写井号，默认是“回车” 
	
	p2 = new char[11];
	cin.getline(p2,10,'#');
	 
	cout<<"c1 = "<<p1<<endl; 
	cout<<"c2 = "<<p2<<endl;
	
	// 试着输入 djfgjg#dsfjksdjhf# 
	return 0;
}
