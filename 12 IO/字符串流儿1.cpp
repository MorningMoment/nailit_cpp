# include <iostream>
# include <sstream>
using namespace std;

int main(){
	string str = "hello 123 45.6 789"; //���ܸĳɱ�ļ����ֻ���ǿո� 
	istringstream mysin(str); //����������Ϳ��Ե���cin����
	 
	
	string s1;
	mysin>>s1;
	cout<<s1<<endl; //��helloȡ������
	
	int ivar;
	mysin>>ivar;
	cout<<ivar<<endl;  //ȡ����һ��int ����string������ݱ��int 
	
	double dvar;
	mysin>>dvar;
	cout<<dvar<<endl; //ȡ����һ��double ��string������ݱ��double 
}
