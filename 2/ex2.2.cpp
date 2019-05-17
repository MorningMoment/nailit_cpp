#include <iostream>
using namespace std;

int main(){
	char choice='a';
	double cir,pi=3.14159265354,line_1,line_2,r;
	while(choice != 'q' ){
		cout << "a for reg, b for cir, q to quit"<<endl;
		cin >> choice;
		if(choice == 'a'){
			cout << "input lines"<<endl;
			cin >> line_1;
			cin >> line_2;
			cir = (line_1 + line_2)*2;
			cout << "for the reg"<<cir<<endl;
		}
		else if(choice == 'b'){
			cout << "input radius"<<endl;
			cin >> r;
			cir = (r*r)*pi;
			cout << "for the circle"<<cir<<endl;
		}
		else if (choice == 'q'){
			break;
		}
		else cout<<"error"<<endl;
		
	}
	return 0;
	
}
