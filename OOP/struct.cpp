# include <iostream>
using namespace std;

struct s_demo{
	string name;//default: public
}; 

class c_demo{
	string name;//default: private
	public:
		int num = 10;
};

struct subs_demo:s_demo{ //public继承 
	
};

class subc_demo:c_demo{//default ： private 继承 
 
	
}; 

int main(){
	s_demo sd1;
	sd1.name = "hello";
	
	c_demo cd1;
	//cd1.name = "hello"; error,因为name变量默认是private 
	
	cd1.num = 20;
	subc_demo subc1;
	
	//subc1.num = 20;error,因为默认是private继承 
} 
