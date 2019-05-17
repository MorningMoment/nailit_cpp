# include <iostream>
# include <cstring>
using namespace std;

int main(){
	string para;
	getline(cin,para);
	int letter=0, num=0, space=0;
	//判断有几个字母、数字、空格
	for(int i=0;i<para.size();i++){
		if(isdigit(para[i])){ //if(para[i]>='a' && para[i]<='z')
			num++;
		}else if(isalpha(para[i])){
			letter++;
			para[i] = toupper(para[i]);
		}else if(isspace(para[i])){
			space++;
		}
	} 
	cout<<"letter = "<<letter<<" num = "<<num<<" space = "<<space<<endl;
	cout<<para<<endl;
	return 0;
	
	}
	 
