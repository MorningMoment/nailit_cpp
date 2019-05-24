# include <iostream>
# include <fstream>
# include <strstream> 
using namespace std;

int main(){
	ifstream myin("F:/Travail/´óËÄÏÂ/cpp/files/1.txt");
	double x;
	double sum = 0;
	string s;
	if(myin){
		cout<<"file opened."<<endl;
		for(int i=0;i<7;i++){
			myin>>x;
			sum+=x;
			cout<<x<<"--";
		}
		cout<<endl; 
		cout<<"sum = "<<sum<<endl;
		
		getline(myin,s);
		getline(myin,s);
		cout<<s<<endl;
		
		myin.close();
	} 
	
	
	return 0;
}
