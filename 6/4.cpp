#include <iostream>
#include <string> 
#include <limits>
#include<stdlib.h>
using namespace std;

int main() {
	int x, y, z,max;
	cin >> x >> y >> z;
	max = (x > y) && (x > z) ? x : y > z ? y : z; //���&&�������㣬�򷵻�x����������㣬�Ƚ�y��z���������Ǹ���

	return 0;
	getchar();
}
