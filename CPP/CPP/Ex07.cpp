#include<stdio.h>

int main() {
	int a = 20;

	int *ptr_a;
	ptr_a = &a;

	printf_s("a�� �� : %d\n",a);
	printf_s("a�� �ּҰ� : %d\n", &a);
	printf_s("ptr_a�� ����� �� : %d\n", ptr_a);
	printf_s("ptr_a�� ����Ű�� ������ �� : %d\n", *ptr_a);
}