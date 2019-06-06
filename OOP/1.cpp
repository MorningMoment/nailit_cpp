# include <iostream>
# include <cstring>
using namespace std;

class student{
	private:
		long id;
		char *name;
		double *score; 
	
	public : 
		student(char *new_name); 
		student(long new_id,char *new_name,double new_score);
		~student(); 
		void printinfo();
		int getscore();
		student(const student &obj){ //拷贝构造函数 
			this -> id = obj.id;
			this -> score = new double;
			this -> name = new char[100];
			*this->score = *obj.score;
			strcpy(this->name,obj.name);
			
		}
		bool setscore(double new_score);
		 
};

student::student(char *new_name  = "mary"){
	id = 12344;
	int new_score = 100;
	name = new char[100];
	strcpy(name,new_name);
	*score = new_score;
} 

student::student(long new_id,char *new_name,double new_score){
	this -> score = new double;
	this -> name = new char[100];
	id = new_id;
	*score = new_score; 
	strcpy(name,new_name);
	
}

student::~student(){
	cout<<"id: "<<id<<endl;
	cout<<"name: "<<name<<endl; //attention here
	cout<<"score: "<<*score<<endl; 
	delete name;
	delete score;
	cout<<endl<<"****************end**************"<<endl<<endl;
}


int student::getscore(){
	return *score;
}

bool student::setscore(double new_score){
	if(new_score>100 && new_score<0) {
		cout<<"error score setting"<<endl;
		return false;
	} //more needed
	else{
		this->score = new double;
		*score = new_score;
		return true;
	}

}

void student::printinfo(){
	cout<<"id: "<<id<<endl;
	cout<<"name: "<<name<<endl; //attention here
	cout<<"score: "<<*score<<endl; 
}

//************************
//************************
//************************

class undergraduate:public student{
	private:
		string major;
	public:
//		undergraduate(){ //不指定父类的构造函数，调用无参构造函数 
//			major ="un";
//			cout<<"ug constructor...with no para"<<endl;
//		}
		undergraduate(string nm = "nming", int sc=0, string mj="un"){ //调用父类的有参构造函数  ????
			major = mj;
			cout<<"ug constructor... with para"<<endl;
		}
	
}; 

//class int_und:public undergraduate{
//	private:
//		string nationality;
//	public:
//		int_und(){
//			cout<<"interna ug constructor ... with no para"<<endl;
//		}
//		int_und(string nm,int sc=0,string mj = "un",string na = "sk"){
//			nationality = nm;
//			cout<<"interna ug constructor ... with para";
//		}
		
//}; 


int main(){
	undergraduate u1;
	return 0;
}

