#include <stdio.h>

int main() {
	char arr[] = "Hello, World!";	//13
	printf("�迭�� ũ�� : %d\n", sizeof(arr) / sizeof(char));	//14 �������� NULL���ڰ� ���Ե�

	char s[100];
	scanf_s("%s", s, sizeof(s));
	printf("%s", s);
}