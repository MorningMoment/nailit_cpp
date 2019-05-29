# include <iostream>
# include <cstring>
# define MAXCAP 200
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


class teacher{
	private:
		const string id; //���ⶨ���ʱ��һ��Ҫ�ó�ʼ���б��ʼ�� 
		const string name;
		string department;
	public:
		teacher() ; //�޲� 
		//teacher(string ids = "T000", string nm = "un", string dp = "cs"); //�в��޲κ�һ 
		teacher(string ids, string nm , string dp );//�в� 
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
		int cap,studnet; //student������ѧ������ 
		teacher tea;
		student *stu; //����һ������ ��ѧ���б�
		static int crscnt; //�ܿγ���
		
	public:
	 	course(string, string, int, teacher,student *);
};

int course::crscnt = 0; //��̬������ʼ��	
//��̬���������Ե��÷Ǿ�̬�����ͷǾ�̬���ݳ�Ա 

course::course(string ids = "c001", string nm = "un", int cap=40, teacher t = teacher(), student *s,int stulen):tea(t){
	id = ids;
	name = nm;
	if(cap>0 && cap<MAXCAP){
		this->cap = cap;//����һ��һ���������� 
	}else this->cap cap = MAXCAP;
	
	stu = new student[cap];
	
	int capnum = cap>stulen?stulen:cap; //ȡ��Сֵ 
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
