//3����д���򡣴Ӽ�������һ���������������λ������ת�������磺���� 861����� 3 �� 168��
//��ʾ���ɲ��� if/else ����ж��Ƿ�С�� 0��ʹ�ó����ж�λ����ʹ����������%�������
//�ķ��������λ�ϵ�����Ȼ�����������

#include <iostream>
using namespace std;

int main(){
	int digit=1,i=0,newnum=0;
	cout << "Please input the digit"<<endl;
	cin >> digit;
	
	while (digit>0){
			newnum = newnum*10+digit%10;
			digit = digit /10;
			
			i++;
		}
		cout<<"The length of digit is: "<<i<<endl; 
		cout<<"The reverse is:"<<newnum<<endl;
		return 0;
		}
	
