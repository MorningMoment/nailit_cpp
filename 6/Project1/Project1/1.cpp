#include <iostream>
#include <string> 
#include <limits>
#include<stdlib.h>
using namespace std;

int other() {
	int x = 2, y = 3;
	x += y;
	cout << "x="<<x<<" y="<<y<<endl;

	x *= 10 + y;
	cout << "x=" << x << " y=" << y << endl;

	x = 2;
	y = 3;
	int z = 4;

	x *= ++y = x + z;
	cout << "x=" << x << " y=" << y<<" z="<<z<< endl;
	return 0 ; 
	getchar();

}