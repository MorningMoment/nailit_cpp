# include <iostream>
using namespace std;

class demo final{ //不可以继承了 
	public:
		int i;
}; 

class sub_demo:public demo{
	
};

int main(){
	sub_demo sd;
	return 0;
}
