# include <iostream>
using namespace std;

class demo final{ //�����Լ̳��� 
	public:
		int i;
}; 

class sub_demo:public demo{
	
};

int main(){
	sub_demo sd;
	return 0;
}
