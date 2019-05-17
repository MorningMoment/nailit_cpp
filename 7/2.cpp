# include <iostream>
#include <cmath> 
using namespace std;

void fact (int x){
	x = abs(x);
	int ans = 1;
	int i =1;
	while(i<=x){
		ans *= i;
		i++;
	}
	cout<<ans<<endl;
}


int main(){
	fact(5);
	
	return 0;
} 
