# include <iostream>
# include <fstream>


using namespace std;

int main(){
	ofstream myout("F:/Travail/������/cpp/files/2.txt");//��Ϊ����ļ� 
	string name;
	int score;
	
	if(myout){
		cout<<"please enter name and score:"<<endl;
		while(cin>>name){ //�س�+ctrl-z 
			cin>>score;
			myout<<name<<" "<<score<<endl;
			
		}
		
		myout.close();
		
	} 
	
	return 0;
}
