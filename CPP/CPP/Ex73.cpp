#include <iostream>

using namespace std;

int main() {
	//r-value , ���� ������

	int a(5);
	int &r1 = a;
	//int &r2 = 3; 3�� ����� ���� x
	//int &r3 = a * a;
	
	//int &&r1 = a;  a�� ���� �����ϱ� ������ x
	int &&r2 = 3;
	int &&r3 = a * a;


}