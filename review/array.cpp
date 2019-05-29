# include <iostream>
# include <cstring>
using namespace std;

int main(){
	int a = 1, b = 2, c = 3;
	int *p1 = &a, *p2 = &b, *p3 = &c;
	int *prt[3]; //元素是指针，长度是3的数组 (array of pointer)
	prt[0] = p1;
	prt[1] = p2;
	prt[2] = p3;
	c = 4;
	for(int i=0;i<3;i++){
		cout<<*prt[i]<<" "<<prt[i]<<" ";

	}	
	
	int arr[] = {1,2,3};
	int *p4 = arr; //(pointer of array)
	cout<<endl<<p4<<endl;
 
	
	return 0;
	}
	 
