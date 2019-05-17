# include <iostream>
# include <cstring>
using namespace std;

int main(){
	string para;
	int cnt = 0;
//	getline(cin,para);
	string word = "c++";
	while(cin>>para){
		if(para == word){
			cnt++;
		}
	}
	cout << "cnt = "<<cnt<<endl;
	return 0;
	//先回车然后ctrl+z 
	}
	 
