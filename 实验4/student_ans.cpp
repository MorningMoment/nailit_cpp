# include <iostream>
# include <cstring> 
using namespace std;

class student{
	private:
		string id;
		char *name;
		int *score; //��̬���� 
	public:
		student(string idstr = "U0000", char *nm = "un",int snum = 0);//�������� ��ǰ��ı�������Ĭ�ϲ���������Ĳ���Ҳ�������
		student(const student &obj); //�������캯��
		~student();
		int *getscore(); //���ص���ָ�룬ע�����ⶨ���д�� 
		bool setscore(int new_score);
		void showinfo();
		
		//attention:ʹ��Ĭ�ϲ�����Ҫʹ�ú������ء� 
		 
};

student::student(string idstr , char *nm ,int snum ){
	id = idstr;
	
	name = new char[10]; //��̬���䣡�� �ǵ�delete 
	strcpy(name,nm);
	
	score = new int;//��̬���䣡�� ,�ǵ�delete 
	*score = snum;
	
	cout<<"student constructor...." <<endl<<endl;

}; //������������Ĭ�ϲ��������ⶨ�岻Ҫ��Ĭ�ϲ��� 


student::student(const student &obj){ //������ȫ���չ��캯�� 
	id = obj.id;
	
	name = new char[10]; //��̬���䣡�� �ǵ�delete 
	strcpy(name,obj.name);
	
	score = new int;//��̬���䣡�� ,�ǵ�delete 
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
