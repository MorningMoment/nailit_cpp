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

struct subs_demo:s_demo{ //public�̳� 
	
};

class subc_demo:c_demo{//default �� private �̳� 
 
	
}; 

int main(){
	s_demo sd1;
	sd1.name = "hello";
	
	c_demo cd1;
	//cd1.name = "hello"; error,��Ϊname����Ĭ����private 
	
	cd1.num = 20;
	subc_demo subc1;
	
	//subc1.num = 20;error,��ΪĬ����private�̳� 
} 
