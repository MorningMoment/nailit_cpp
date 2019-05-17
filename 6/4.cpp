#include <iostream>
#include <string> 
#include <limits>
#include<stdlib.h>
using namespace std;

int main() {
	int x, y, z,max;
	cin >> x >> y >> z;
	max = (x > y) && (x > z) ? x : y > z ? y : z; //如果&&条件满足，则返回x；如果不满足，比较y和z，输出大的那个。

	return 0;
	getchar();
}
