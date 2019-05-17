//3．编写程序。从键盘输入一个正整数，输出其位数和逆转数。例如：输入 861，输出 3 和 168。
//提示：可采用 if/else 语句判断是否小于 0，使用除法判断位数，使用求余数（%运算符）
//的方法计算各位上的数，然后逆序输出。

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
	
