#include<stdio.h>

int main() {
	int a = 20;

	int *ptr_a;
	ptr_a = &a;

	printf_s("a의 값 : %d\n",a);
	printf_s("a의 주소값 : %d\n", &a);
	printf_s("ptr_a에 저장된 값 : %d\n", ptr_a);
	printf_s("ptr_a가 가리키는 변수의 값 : %d\n", *ptr_a);
}