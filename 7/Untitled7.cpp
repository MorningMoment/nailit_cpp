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

void ptswap(int *a, int *b){ //实质上是地址的值转递 .但只改变了ab，没改变x,y 
	cout <<" ptswap a = "<<*a<< " b = "<<*b<<endl; 
	cout << "add a = "<<a<< " add b = "<<b<<endl;
	int *temp = a;
	a = b;
	b = temp;
	cout <<" ptswap a = "<<*a<< " b = "<<*b<<endl; 
	cout << "add a = "<<a<< " add b = "<<b<<endl;
	cout<<"***************************"<<endl<<endl;
}

void ptvalueswap(int *a, int *b){ //实质上是地址所指的内容的交换 
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
	cout<<"x ="<<x<<" y = "<<y<<endl<<endl; //会发现外面x和y没有交换值。 
	refswap(x,y);
	cout<<"x ="<<x<<" y = "<<y<<endl<<endl; //外面的x和y交换了值
	ptswap(&x,&y);
	cout<<"x ="<<x<<" y = "<<y<<endl<<endl; //换了x，y地址的值，但是没有换x，y本身的值 
	ptvalueswap(&x,&y);
	cout<<"x ="<<x<<" y = "<<y<<endl<<endl; // 换了 x，y的值 ,没有交换地址 
	 
	
	
	return 0;
} 
