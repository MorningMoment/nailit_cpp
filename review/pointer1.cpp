# include <iostream>
using namespace std;

int main(){
	int c = 1;
	//int *a = c;//��
	int *a;
	a = &c; //����1 
	//*a = c; ����  

	int *a = &c; // ����2 
	cout<<a<<endl;
	
	return 0;
}
