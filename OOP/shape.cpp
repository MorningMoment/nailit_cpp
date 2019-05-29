# include <iostream>
using namespace std;

class shape{

	public:
		string color;
		shape(string col = "white"):color(col){
			cout<<endl<<"shape constructor...."<<endl; 
		}
//		void showinfo(){
//			cout<<"This is a shape"<<endl<<"color = "<<color<<endl;
//		} 
		virtual void showinfo(){
			cout<<"This is a shape"<<"   "<<"color = "<<color<<endl;
		} 
		
		~shape(){
			cout<<"shape destuctor ***"<<endl<<endl;
		}
};

class circle:public shape{
	private:
		double r;
	public:
		circle(double rnum =0 ,string col="white"):shape(col),r(rnum){
			cout<<endl<<"circle constructor....."<<endl<<endl;
		}
		void showinfo(){
			cout<<"This is a circle"<<"   "<<"color = "<<color<<"  r is "<<r<<endl;
		} 
		~circle(){
			cout<<"********** circle destructor"<<endl;
		}
};

class rec:public shape{
	private:
		double x,y,w,h;
	public:
		rec(double xnum = 0, double ynum =0, double wnum = 0, double hnum = 0, string col = "white"):shape(col),x(xnum),y(ynum),w(wnum),h(hnum){
			cout<<endl<<"rect constructor"<<endl; 
		}
		~rec(){
			cout<<"...... rect destructor"<<endl;
		}
		void showinfo(){
			cout<<"This is a rec: "<<color<<"("<<x<<","<<y<<")"<<endl;
		}
};


int main(){
	rec r1(1,2,3,4,"green"); //�ȵ��ø���shape�Ĺ��캯����Ȼ�����Լ���circle���캯�� 
	r1.showinfo();
	
	circle c1(1,"blue");
	c1.showinfo();
	
	
	cout<<endl<<endl<<"1*********************"<<endl;
	
	shape s1 = c1; 
	s1.showinfo();//���õ���shape��showinfo �����ܷ�������Ķ���  
	cout<<endl<<endl<<"2*********************"<<endl;
	
	shape *spt = &c1; 
	spt->showinfo();//�ڸ���shape��showinfo Ϊ�麯��ʱ�����õ���circle��showinfo 
	cout<<endl<<endl<<"3*********************"<<endl;
	
	shape &sref = c1; 
	sref.showinfo();//�ڸ���shape��showinfo Ϊ�麯��ʱ�����õ���circle��showinfo  
	cout<<endl<<endl<<"4*********************"<<endl;
	return 0;
}