/*
f(n) = n * f(n-1)
*/
# include <iostream>
using namespace std;

int fact(int n){
	if(n==1 || n==0) return 1;
	else {
		return n*fact(n-1);
		cout<<"n = "<<n<<endl;
	}
}


int fact1(int n){
	int ans = 1 ;
	if(n==1 || n==0) ans = 1;
	else {
		ans =  n*fact1(n-1);}
		cout<<"n = "<<n<<endl;
	return ans;
}

int main(){
	cout<<fact1(5)<<endl;
	return 0;
} 
