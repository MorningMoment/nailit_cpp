#include <iostream>

using namespace std;

int main() {
	int x,y;
	double &yy=y; //error, ���Ͳ�ͬ��double��int��

	int *xp = &x;
//	int *xp;
//	xp = &x; ����һ���ǵȼ۵�


	double *yp = &y;//error, ���Ͳ�ͬ��double,int��

	int *px;
	//cout<<*p1<<endl;
	//*p1 =5 ; ���ж��ǿ�ָ�룬ָ��֪���ռ䣬�ᱨ��

	//�������(1)��
	px = &x; //ָ��һ������

	//�������(2):
	px = new int; //��ϵͳ����һ���洢int�Ŀռ䣬��new������һ�������ռ䡣
	*px = 5;
	cout << "px=" <<px<<endl; //��ַ
	cout << "*px="<<*px<<endl; //�洢��ֵ��=5
	
	delete px; //������Ŀռ�ɾ�� 

	return 0;
}
