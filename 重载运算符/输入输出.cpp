# include <iostream>
# include <fstream>
using namespace std;

class complex{
	private:
		double real, image;
		 
	public : 
		friend istream &operator>>(istream &myin, complex &c);
		friend ostream &operator<<(ostream &myout, complex &c);
		complex(double r=0, double i=0):real(r),image(i){
		}
		void show(){
			cout<<"("<<real<<" , "<<image<<"i)"<<endl;
		}
		
		complex operator+(const complex &c){
			complex ans;
			ans.real = real+c.real;
			ans.image = image + c.image;
			return ans;
		}
		
		complex operator-(const complex &c){
			complex ans;
			ans.real = real-c.real;
			ans.image = image - c.image;
			return ans;
		}
		
		complex operator=(const complex &c){
			complex ans;
			ans.real = c.real;
			ans.image = c.image;
			return ans;
		}
		
		bool operator>(const complex &c){
			return this->real>c.real;
		}
};

istream &operator>>(istream &myin, complex &c){
	myin>>c.real>>c.image; //说明会从流里取两个数，但是不用管是从文件来的还是键盘来的 
	return myin; 
} 

ostream &operator<<(ostream &myout, complex &c){
	myout<<c.real<<" "<<c.image<<endl;
	return myout;
} 


int main(){
	complex c1, c2(40,40),c3(50,60);
	c1.show();

	
	ifstream infile("F:/Travail/大四下/cpp/nailit_cpp/重载运算符/read.txt");
	if(infile){
		infile>>c1;
	}
	
	cin>>c1;
	c1.show();
	
	ofstream outfile("F:/Travail/大四下/cpp/nailit_cpp/重载运算符/read.txt");
	if(outfile){
		outfile<<c1<<endl;
		outfile<<c2<<endl;
		outfile<<c3<<endl;
		
		outfile.close();
	}
	
	cout<<c1;
}  
