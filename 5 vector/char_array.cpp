#include <iostream>

using namespace std;

int main(){
	char cb[] = {"accbbccd"}; //��cɾ�� 

	cout<<cb<<endl;
	
	for(int i,j=0;cb[i]!=0;){ //��֪��cb�೤��ʱ��cb���һλ��'\0',����0 
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


 
