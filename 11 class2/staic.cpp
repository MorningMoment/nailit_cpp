# include <iostream>
using namespace std;

class staticdemo{
	public : 
		static int stx;
		int comx;
		 
		void show(){
			cout<<"stx = "<<stx<<endl;
			cout<<"comx = "<<comx<<endl;
			cout<<"pristx = "<<pristx<<endl;
		}
		
		staticdemo(){
			stx++; //�����ڼ�¼�ܹ������˶��ٸ��� 
		} 
		
		void reset_pristx(int num);  
	
		static void stfun(){
			stx = 12345; //���ԣ���Ϊstx�������๲��� 
//			comx = 54321; //�����ԣ���Ϊcomx��ÿ�����Լ����еģ��Ƿ�static��Ա�� 
		}
	
	private:
		static int pristx; 
};

int staticdemo::stx = 0; //�����ʼ������Ҫ����int 
int staticdemo::pristx = 77;
void staticdemo::reset_pristx(int num){
	stx = num;
} 


int main(){
	staticdemo sd1;
	sd1.stx = 100; //���� 
//	sd1.pristx = 200; �����޸� 
	sd1.reset_pristx(333);
	sd1.show();
	
	staticdemo sd2,sd3,sd4;
	cout<<staticdemo::stx<<endl;  //������336 ����ϸ��ĥ 
	
	return 0;
} 
