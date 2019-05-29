# include <iostream>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	int a[x][y];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			a[i][j] = y*i+j+1;
		}
	} 
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	int b[y][x];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			b[j][i] = a[i][j];
		}
	} 
	
	for(int j=0;j<y;j++){
		for(int i=0;i<x;i++){
			cout<<b[j][i]<<" ";
		}
		cout<<endl;
	} 

		
	
	return 0;
}
