#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	double div;
	cin >> x;
	cin >> y;
	cin >> z;
	if(x+z==0) cout<<"error"<<endl;
	else {div = (x+1)*(y-1)*1.0/(x+z);
		cout<<"the result is "<<div<<endl;
	}
	
	
}
