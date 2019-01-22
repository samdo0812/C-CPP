#include <iostream>

using namespace std;

int main() {
	//r-value , 수정 가능한

	int a(5);
	int &r1 = a;
	//int &r2 = 3; 3은 상수라 수정 x
	//int &r3 = a * a;
	
	//int &&r1 = a;  a는 수정 가능하기 때문에 x
	int &&r2 = 3;
	int &&r3 = a * a;


}