# include <iostream>
# include <fstream>


using namespace std;

int main(){
string name;
int score,sum = 0,cnt = 0;

ifstream myin("F:/Travail/������/cpp/nailit_cpp/files/2.txt",ios::in); //���ļ��ж�ȡ��ios::in��ʡ�� 

if(myin){
	while(myin>>name){ //��ͣ��ȡ�� 
		myin>>score;
		cout<<cnt<<endl; 
		sum = sum+score;
		cnt ++;
	}
	
	cout<<"avg = "<<sum/(double)cnt<<endl;
	cout<<"cnt = "<<cnt<<endl;
} 
};

