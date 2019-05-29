# include <iostream>
using namespace std;

int main(){
	int *p1,*p2,*p,a,b;
	cin>>a>>b;
	p1=&a;
	p2=&b;
	cout<<" &a = "<<&a<<"  &b = "<<&b<<endl;
	cout<<" p1 = "<<p1<<"  p2 = "<<p2<<endl;
	if(a<b){
		p=p1;p1=p2;p2=p; //解绑了，换的是地址，所以p1匹配b，p2匹配a 
	} 
	cout<<endl<<" &a = "<<&a<<"  &b = "<<&b<<endl;
	cout<<" p1 = "<<p1<<"  p2 = "<<p2<<endl;
	cout<<"a = "<<a<<"  b = "<<b<<endl;
	cout<<"p1 = "<<*p1<<"  p2 = "<<*p2<<endl; 
	return 0;
}
