#include<stdio.h>

int main() {
	int a = 10;
	
	int *ptr;
	ptr = &a;

	int **ptr_ptr;
	ptr_ptr = &ptr;

	printf_s("a = %d\n",a);
	printf_s("&a = %d\n", &a);
	
	printf_s("ptr = %d\n", ptr);
	printf_s("&ptr = %d\n", &ptr);

	printf_s("ptr_ptr = %d\n", ptr_ptr);
	printf_s("*ptr_ptr = %d\n", *ptr_ptr);
	printf_s("**ptr_ptr = %d\n", **ptr_ptr);
}