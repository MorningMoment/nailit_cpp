# include <iostream>
using namespace std;

void printstars(); 
void reverse(double i); //������ʱ��Ҫע���������� 
double reverse1(double i); 

double i;
int main(){
	cin>>i;
    printstars();
    reverse(i); //����� 
    reverse1(i+1); //���������
	cout<<reverse1(i+1); //����� 
	// cout<<reverse(i); ����error 
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
	return ans; //���ر��������ͱ���ͷ�������������һ�� 
}
