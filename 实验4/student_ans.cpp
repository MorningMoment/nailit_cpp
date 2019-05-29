# include <iostream>
# include <cstring> 
using namespace std;

class student{
	private:
		string id;
		char *name;
		int *score; //动态分配 
	public:
		student(string idstr = "U0000", char *nm = "un",int snum = 0);//类内声明 ，前面的变量给了默认参数，后面的参数也必须给。
		student(const student &obj); //拷贝构造函数
		~student();
		int *getscore(); //返回的是指针，注意类外定义的写法 
		bool setscore(int new_score);
		void showinfo();
		
		//attention:使用默认参数不要使用函数重载。 
		 
};

student::student(string idstr , char *nm ,int snum ){
	id = idstr;
	
	name = new char[10]; //动态分配！！ 记得delete 
	strcpy(name,nm);
	
	score = new int;//动态分配！！ ,记得delete 
	*score = snum;
	
	cout<<"student constructor...." <<endl<<endl;

}; //类内声明给了默认参数，类外定义不要给默认参数 


student::student(const student &obj){ //几乎完全参照构造函数 
	id = obj.id;
	
	name = new char[10]; //动态分配！！ 记得delete 
	strcpy(name,obj.name);
	
	score = new int;//动态分配！！ ,记得delete 
	*score = *obj.score;
	
	cout<<"copy constructor...." <<endl<<endl;
}

student::~student(){
	delete []name;
	delete score;
	cout<<"student destructor...."<<endl<<endl; 
} 

int *student::getscore(){
	return score;
}

bool student::setscore(int new_score){
	bool yesno = false;
	if(new_score>=0 && new_score<=100){
		*score = new_score;
		yesno = true;
	} 
	return yesno;
}

void student::showinfo(){
	cout<<endl<<id<<" "<<name<<" "<<*score<<endl;
}

int main(){
	student s1("a0001","mary",89);
	student s2("b0002","jack",90);
	student s3 = s1;
	
	cout<<s1.getscore()<<" "<<*s1.getscore()<<endl;
	s1.setscore(100);
	s1.showinfo();
	
	
	return 0;
}
