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
		p=p1;p1=p2;p2=p; //����ˣ������ǵ�ַ������p1ƥ��b��p2ƥ��a 
	} 
	cout<<endl<<" &a = "<<&a<<"  &b = "<<&b<<endl;
	cout<<" p1 = "<<p1<<"  p2 = "<<p2<<endl;
	cout<<"a = "<<a<<"  b = "<<b<<endl;
	cout<<"p1 = "<<*p1<<"  p2 = "<<*p2<<endl; 
	return 0;
}
