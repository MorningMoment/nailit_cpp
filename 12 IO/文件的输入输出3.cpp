# include <iostream>
# include <fstream>


using namespace std;

int main(){
	ofstream myout("F:/Travail/������/cpp/nailit_cpp/files/2.txt",ios::app);//�����е��ļ�����д�� 
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
