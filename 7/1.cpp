# include <iostream>
# include <cstring>
using namespace std;

void printstars(){
	cout<<"**************"<<endl;
	for (int i=1;i<11;i++){
	cout<<i<<" ";
	} 
	cout<<endl<<"**************"<<endl;
}

int main(){
	cout<<"start!"<<endl;
	printstars(); //��main������ʹ��printstars�������ƣ������˸ú����� 
	cout<<"end!"<<endl;
	return 0;
} 
