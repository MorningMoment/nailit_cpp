/*
f(n) = f(n-1) + f(n-2)
f(1) = 1
f(2) = 1
*/

# include <iostream>
using namespace std;

long fi(long n){
	long ans;
	if (n==1||n==2) ans = 1;
	else{ans = fi(n-1)+fi(n-2);
	}
	cout<<"n = "<<n<<endl;
	return ans;
}


int main(){
	cout<<fi(6)<<endl; // 2,1>>3,2>>4>>(2,1,3)>>5>>(2,1,3,4)>>6
	return 0;
} 
