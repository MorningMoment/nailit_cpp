# include <iostream>
using namespace std;

class condemo{
	public :
		condemo(int xnum = 0, int ynum = 1):x(xnum), y(ynum){//����Ҫ�ó�ʼ���б��� 
//			x= xnum; y= ynum; // ���У��ᱨ�� 
		} 
		
		void fun(){
//			x = 10; �ᱨ�� 
//			y = 20; ���ԣ����ᱨ�� �����Զ����ݳ�Ա�����޸ġ� 
//			confun();  ���Ե���const���� 
			cout<<"common function"<<endl;
		}
		
		void confun()const{
//			y = 30;  �ᱨ��������const����ĺ�������ܶ����ݳ�Ա�����޸� 
//			fun();  �����Ե��ã���Ϊfun() �п��ܻ�����ݳ�Ա�����޸ģ�����const�����ͼ�Ӷ����ݳ�Ա�����޸��ˡ� 
			cout<<"const function"<<endl;
		}
		
		void outdef()const; //�������� 
		
	private:
		const int x;
		int y;
		
		 
};

void condemo::outdef()const{ //���ⶨ�� 
	cout<<"what ever"<<endl;
}


int main(){
	const condemo cd1;
//	cd1.fun(); �ᱨ����һ��������const���ֻ࣬�ܵ���const����
	cd1.outdef();
 	
 	condemo cd2;
	cd2. fun(); //���С� 
	
	return 0;
} 
