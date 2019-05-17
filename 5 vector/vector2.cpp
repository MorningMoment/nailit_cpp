#include <iostream>
#include <vector>

using namespace std;

int main(){
	//23, 43, 43,14
	int x1, x2, x3, x4;
	vector <int> v1;
	while(cin>>x1){
		if(v1.empty()){
		cout<<"v1 is empty"<<endl;
	}else{
		cout<<"v1 is of size "<<v1.size()<<endl;
	}
		v1.push_back(x1);
	} 
	cout<<"v1[3]: "<<v1[3]<<endl;
	
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<endl;
	}
	
	return 0;
} 
