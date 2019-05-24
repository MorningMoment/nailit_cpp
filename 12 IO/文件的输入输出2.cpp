# include <iostream>
# include <fstream>


using namespace std;

int main(){
	ofstream myout("F:/Travail/大四下/cpp/files/2.txt");//存为这个文件 
	string name;
	int score;
	
	if(myout){
		cout<<"please enter name and score:"<<endl;
		while(cin>>name){ //回车+ctrl-z 
			cin>>score;
			myout<<name<<" "<<score<<endl;
			
		}
		
		myout.close();
		
	} 
	
	return 0;
}
