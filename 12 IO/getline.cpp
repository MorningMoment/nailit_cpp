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
////	y = s1*s1; ������Ϊs1���ַ���
//	getline(cin,s2);
//	cout<<endl<<s2<<endl; 
//	
	//***********
	
	char *p1,*p2;
	p1 = new char[10];
	cin.getline(p1,15,'#'); //���ᱨ����, ����ȡ14λ , �����д���ţ�Ĭ���ǡ��س��� 
	
	p2 = new char[11];
	cin.getline(p2,10,'#');
	 
	cout<<"c1 = "<<p1<<endl; 
	cout<<"c2 = "<<p2<<endl;
	
	// �������� djfgjg#dsfjksdjhf# 
	return 0;
}
