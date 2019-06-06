# include <iostream>
# include <cstring>
using namespace std;

class student{

	
	public : 
		long id;
		double score; 
		student(); 
		student(int new_id,double new_score);

};

student::student(){
	id = 12344;
	score = 100;
} 

student::student(int new_id,double new_score){
	id = new_id;
	score = new_score;
}


//************************
//************************
//************************

class undergraduate:public student{
	private:
		string major;
	public:
		undergraduate(string mj="un",int new_id = 0000,double new_score = 1000):student(new_id,new_score){ //调用父类的有参构造函数  ????
			major = mj;
			cout<<"ug constructor... with para"<<endl;
		}
		void showinfo(){
			cout<<"id = "<<id<<"  socre = "<<score<<" major = "<<major<<endl; 
		}
	
}; 




int main(){
	undergraduate u1;
	u1.showinfo();
	return 0;
}

