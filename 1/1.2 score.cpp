#include <iostream>
using namespace std;

int main(){
	int score;
	cout<<"please enter your score";
	cin>>score;
	
	for(int i=0;i<10;i=i+1){ //�ʼi=0, Ȼ���ж�i<10, ����i+1 
	
	if (score>=85) cout<<"A";
	else if(score >= 75) cout<<"B";
	else if(score >= 60) cout<<"C";
	else cout<<"D";	
	return 0;
}
