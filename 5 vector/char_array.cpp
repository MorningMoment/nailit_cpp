#include <iostream>

using namespace std;

int main(){
	char cb[] = {"accbbccd"}; //把c删掉 

	cout<<cb<<endl;
	
	for(int i,j=0;cb[i]!=0;){ //不知道cb多长的时候，cb最后一位是'\0',等于0 
			if(cb[i] != 'c'){
			cb[j] = cb[i];
			i+=1;
			j+=1;
			}else{
				i++;
			}	 
			if(cb[i+1]==0) cb[j]='\0';
	}
	cout<<cb<<endl;
	return 0; 
	}


 
