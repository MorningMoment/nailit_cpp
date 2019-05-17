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
	printstars(); //在main函数中使用printstars函数名称，调用了该函数。 
	cout<<"end!"<<endl;
	return 0;
} 
