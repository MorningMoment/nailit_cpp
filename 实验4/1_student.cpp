# include <iostream>
# include <cstring>
using namespace std;

class student{
	private:
		long id;
		char *name;
		double *score; 
	
	public : 
		student(long new_id,char *new_name,double new_score);
		~student(); 
		void printinfo();
		int getscore();
		student(const student &obj){ //¿½±´¹¹Ôìº¯Êý 
			this -> id = obj.id;
			this -> score = new double;
			this -> name = new char[100];
			*this->score = *obj.score;
			strcpy(this->name,obj.name);
			
		}
		bool setscore(double new_score);
		 
};

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

int main(){
	student s1(12345,"xingzhou",98);
	student s2 = s1;
	s2.setscore(100);
	student st[2] = {student(12345,"xingzhou",98),student(12346,"xiaoming",99)};

	return 0;



} 
