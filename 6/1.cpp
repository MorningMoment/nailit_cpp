# include <iostream>
using namespace std;

int main(){
	int i =0, j = 0;
	
	int x,y;
	
	x=++i; // i = i+1, x = i
	cout<<"x="<<x<<" i="<<i<<endl;
	
	y=j++;//y=j, j=j+1
    cout<<"y="<<y<<" j="<<j<<endl;
    
    i=j=0;
    if(i++) cout<<"i: if yes"<<endl; 
    else cout<<"i: no else"<<endl;
	
	if(++j) cout<<"j: if yes"<<endl; 
	else cout<<"j: no esle";
	
	i=j=0;
//	while(++i){
//		j++;
//		cout<<"i="<<i<<" j="<<j<<endl;
//	}  // This loop will not begin.

	while(i++<3){
		j++;
		cout<<"i="<< i<<" j="<<j<<endl;
	}
	//i=1 j=1
	//i=2 j=2
	//i=3 j=3
	
	cout<<"i = "<<i<<endl; //j = 4
	
	int k=0;
	cout<<"k=" <<k<<endl;
	cout<<"x = 10+k++; x = "<<10+k++<<endl;
	cout<<"x = 10+++k; x = "<<10+(++k)<<endl;
	return 0;
} 
