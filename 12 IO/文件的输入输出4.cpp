# include <iostream>
# include <fstream>


using namespace std;

int main(){
string name;
int score,sum = 0,cnt = 0;

ifstream myin("F:/Travail/大四下/cpp/nailit_cpp/files/2.txt",ios::in); //从文件中读取，ios::in可省略 

if(myin){
	while(myin>>name){ //不停读取？ 
		myin>>score;
		cout<<cnt<<endl; 
		sum = sum+score;
		cnt ++;
	}
	
	cout<<"avg = "<<sum/(double)cnt<<endl;
	cout<<"cnt = "<<cnt<<endl;
} 
};

