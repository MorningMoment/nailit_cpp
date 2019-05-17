# include <iostream>
using namespace std;

void getswap(int a, int b){
	cout<<" getswap a ="<<a<<" b = "<<b<<endl;
	cout << "add a = "<<&a<< " add b = "<<&b<<endl;	
	int temp = a;
	a = b;
	b = temp;
	cout<<" getswap a ="<<a<<" b = "<<b<<endl;
	cout << "add a = "<<&a<< " add b = "<<&b<<endl;
	cout<<"***************************"<<endl<<endl;
}

void refswap(int &a, int &b){
	cout<<" refswap a ="<<a<<" b = "<<b<<endl;
	cout << "add a = "<<&a<< " add b = "<<&b<<endl;
	int temp = a;
	a = b;
	b = temp;
	cout<<" refswap a ="<<a<<" b = "<<b<<endl;
	cout << "add a = "<<&a<< " add b = "<<&b<<endl;
	cout<<"***************************"<<endl<<endl;
} 

void ptswap(int *a, int *b){ //ʵ�����ǵ�ַ��ֵת�� .��ֻ�ı���ab��û�ı�x,y 
	cout <<" ptswap a = "<<*a<< " b = "<<*b<<endl; 
	cout << "add a = "<<a<< " add b = "<<b<<endl;
	int *temp = a;
	a = b;
	b = temp;
	cout <<" ptswap a = "<<*a<< " b = "<<*b<<endl; 
	cout << "add a = "<<a<< " add b = "<<b<<endl;
	cout<<"***************************"<<endl<<endl;
}

void ptvalueswap(int *a, int *b){ //ʵ�����ǵ�ַ��ָ�����ݵĽ��� 
	cout <<" ptswap *a = "<<*a<< " *b = "<<*b<<endl; 
	cout << "add a = "<<a<< " add b = "<<b<<endl;
	
	int temp = *a;
	*a = *b;
	*b = temp;
	
	cout <<" ptswap *a = "<<*a<< " *b = "<<*b<<endl; 
	cout << "add a = "<<a<< " add b = "<<b<<endl;
	cout<<"***************************"<<endl;
}

int main(){
	int x=5, y=10;
	getswap(x,y);
	cout<<"x ="<<x<<" y = "<<y<<endl<<endl; //�ᷢ������x��yû�н���ֵ�� 
	refswap(x,y);
	cout<<"x ="<<x<<" y = "<<y<<endl<<endl; //�����x��y������ֵ
	ptswap(&x,&y);
	cout<<"x ="<<x<<" y = "<<y<<endl<<endl; //����x��y��ַ��ֵ������û�л�x��y�����ֵ 
	ptvalueswap(&x,&y);
	cout<<"x ="<<x<<" y = "<<y<<endl<<endl; // ���� x��y��ֵ ,û�н�����ַ 
	 
	
	
	return 0;
} 
