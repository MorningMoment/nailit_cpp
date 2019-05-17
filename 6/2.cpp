#include <iostream>
#include <string> 
#include <limits>
#include<stdlib.h>
using namespace std;

int main() {
	int x = 2, y = 3;
	x += y;
	cout << "x="<<x<<" y="<<y<<endl;

	x *= 10 + y;
	cout << "x=" << x << " y=" << y << endl;

	x = 2;
	y = 3;
	int z = 4;

	x *= ++y = x + z; //++y >> y=x+z >> x=x*y; ++优先级比=高 
	cout << "x=" << x << " y=" << y<<" z="<<z<< endl;
	return 0 ; 
	getchar();

}
