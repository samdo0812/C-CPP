#include <stdio.h>

int noMeaning() {
	printf_s("first\n");
	return 1;	//return�� ������ ������� �� �� ��ȯ

	printf_s("second\n");
	return 2;
}

int main() {
	int a;
	a = noMeaning();
	
	printf_s("��ȯ�� �� : %d\n" , a);	//1
}