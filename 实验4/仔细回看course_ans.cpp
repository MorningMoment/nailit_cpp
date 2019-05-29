# include <iostream>
# include <cstring>
# define MAXCAP 200
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


class teacher{
	private:
		const string id; //类外定义的时候，一定要用初始化列表初始化 
		const string name;
		string department;
	public:
		teacher() ; //无参 
		//teacher(string ids = "T000", string nm = "un", string dp = "cs"); //有参无参合一 
		teacher(string ids, string nm , string dp );//有参 
		~teacher(); 
		string getname(){
			return name;
		} 
}; 

teacher::teacher():id("T000"),name("un"){
	this->department = "cs";
	cout<<"default constructor...."<<endl; 
}

teacher::teacher(string ids, string nm, string dp):id(ids),name(nm){
	this->department = dp;
	cout<<"customized constructor...."<<endl;
}

teacher::~teacher(){
	cout<<id<<" "<<name<<" "<<department<<endl;
}  




class course{
	private:
		string id,name;
		int cap,studnet; //student是已有学生数量 
		teacher tea;
		student *stu; //定义一个数组 ，学生列表
		static int crscnt; //总课程数
		
	public:
	 	course(string, string, int, teacher,student *);
};

int course::crscnt = 0; //静态变量初始化	
//静态函数不可以调用非静态变量和非静态数据成员 

course::course(string ids = "c001", string nm = "un", int cap=40, teacher t = teacher(), student *s,int stulen):tea(t){
	id = ids;
	name = nm;
	if(cap>0 && cap<MAXCAP){
		this->cap = cap;//数组一个一个拷贝过来 
	}else this->cap cap = MAXCAP;
	
	stu = new student[cap];
	
	int capnum = cap>stulen?stulen:cap; //取最小值 
	for(int i=0;i<cap;i++){
		stu[i] = s[i];
	}
	stucnt = 0;
	crscnt++;
}

int main(){
	course c1; 

	return 0;
}
