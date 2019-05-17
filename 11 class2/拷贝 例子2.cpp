# include <iostream>
# include <cmath>
using namespace std;

class student{
	private:
		string id;
		int score;
	public:
		student(string ids= "unknown",int sco=60)id(ids),score(sco){
			cout<<"constructor...."<<endl;
		}
		
		student(const student &obj){
			id = obj.id;
			score = obj.score;
			cout<<">> copy student info ....." <<endl;
		}

		~student(){
			cout<<endl<<"des***********"<<endl;
		}
};

int main(){
	student st1;
	student st2 = st1;
	
}
	
