# include <iostream>
# include <sstream>
using namespace std;

int main(){
	ostringstream mysout;
	int x[] = {1,2,3,4,5,6,7,8,9,10};
	
	if(mysout){
		for(int i=0;i<10;i++){
			mysout<<x[i]<<" ** ";
		}
		mysout<<endl;
	}
	//����ת�����ַ��� 
	
	cout<<mysout.str()<<endl;
	return 0;
} 
