#include <stdio.h>

//	getchar / putcahr
//	gets / puts
//	�ӵ��鿡���� scanf�� printf���� ����

int main() {
	char ch;
	
	ch = getchar();
	putchar(ch);

//---------------------------------------
// *���� scanf�� ������ ������ �������� �޾���

	char str[100];
	gets_s(str);
	puts(str);
}