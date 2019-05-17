#include <iostream>
#include <cstring> 
#include <limits>
using namespace std;

int main(){
	cout<<"type: \t\t"<< "***********size***********"<<endl;
	cout<<"bool:\t\t"<<"��ռ�ֽ����� "<<sizeof(bool);
	cout<<"\t���ֵ"<<(numeric_limits<bool>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<bool>::min)()<<endl;

	cout<<"char:\t\t"<<"��ռ�ֽ����� "<<sizeof(char);
	cout<<"\t���ֵ"<<(numeric_limits<char>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<char>::min)()<<endl;
	
	cout<<"wchar_t:\t"<<"��ռ�ֽ����� "<<sizeof(wchar_t);
	cout<<"\t���ֵ"<<(numeric_limits<wchar_t>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<wchar_t>::min)()<<"\t"<<endl;	

	cout<<"short:\t\t"<<"��ռ�ֽ����� "<<sizeof(short);
	cout<<"\t���ֵ"<<(numeric_limits<short>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<short>::min)()<<"\t"<<endl;	
	
	
	cout<<"int:\t\t"<<"��ռ�ֽ����� "<<sizeof(int);
	cout<<"\t���ֵ"<<(numeric_limits<int>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<int>::min)()<<endl;	
	
	
	cout<<"unsigned:\t"<<"��ռ�ֽ����� "<<sizeof(unsigned);
	cout<<"\t���ֵ"<<(numeric_limits<unsigned>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<unsigned>::min)()<<endl;	
	
	
	cout<<"long:\t\t"<<"��ռ�ֽ����� "<<sizeof(long);
	cout<<"\t���ֵ"<<(numeric_limits<long>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<long>::min)()<<endl;	
	
	
	cout<<"unsigned long:\t"<<"��ռ�ֽ����� "<<sizeof(unsigned long);
	cout<<"\t���ֵ"<<(numeric_limits<unsigned long>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<unsigned long>::min)()<<endl;	
	
	
	cout<<"double:\t\t"<<"��ռ�ֽ����� "<<sizeof(double);
	cout<<"\t���ֵ"<<(numeric_limits<double>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<double>::min)()<<endl;	
	
	
	cout<<"long double:\t"<<"��ռ�ֽ����� "<<sizeof(long double);
	cout<<"\t���ֵ"<<(numeric_limits<long double>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<long double>::min)()<<endl;	


	cout<<"float:\t\t"<<"��ռ�ֽ����� "<<sizeof(float);
	cout<<"\t���ֵ"<<(numeric_limits<float>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<float>::min)()<<endl;	

	cout<<"size_t:\t\t"<<"��ռ�ֽ����� "<<sizeof(size_t);
	cout<<"\t���ֵ"<<(numeric_limits<size_t>::max)();
	cout<<"\t\t��Сֵ"<<(numeric_limits<size_t>::min)()<<endl;	

	return 0;
} 
