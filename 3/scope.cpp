#include <iostream>
using namespace std;

int gvar = 10, i=100; //ȫ�ֱ��� 

int main(){
	int mvar = 15; //�ֲ����� 
	cout<<"gvar = "<<gvar<<endl;
	if(mvar >10){
		int ifvar; 
		ifvar = mvar + 10;
		cout <<"this is ifvar: "<<ifvar<<endl;
	}
	//cout <<"this is ifvar: "<<ifvar<<endl; //������д���ǷǷ��ģ���Ϊifvar������if�����ˡ� 
	for(int i=0;i<10;i++){
		cout<<"for inside:i="<<i<<endl;
	} 
	
	cout<<"for outside i: ="<<i<<endl;
	return 0;
}

void fun(){

	//cout<<"mvar="<<mvar<<endl;
	//return 0;
}
