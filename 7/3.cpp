# include <iostream>
using namespace std;

int gx = 100;
// cout << "ejfhskfh"<<endl; ��䲻����д������������ 
void fun(){
	cout<<"gx01 = "<<gx<<endl; //�����ں�����ֱ�ӵ���global variable 
	int x=5;
	cout<<"fun:"<<x<<endl;
	gx /= 10;
	
}



int main(){
	cout<<"gx00 = "<<gx<<endl;
	gx += 200;
	fun(); 
	cout<<"gx02 = "<<gx<<endl;
	return 0;
}  //����main��˳���� 
