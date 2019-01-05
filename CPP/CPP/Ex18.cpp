#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;

	int *ptr;

	ptr = &a;
	*ptr = 30;

	ptr = &b;
	*ptr = 10;

	printf_s("%d\n", a);
	printf_s("%d\n", b);
	printf_s("%d\n", *ptr);
}