#include <stdio.h>

int main() {
	char arr[] = "Hello, World!";	//13
	printf("배열의 크기 : %d\n", sizeof(arr) / sizeof(char));	//14 마지막에 NULL문자가 포함됨

	char s[100];
	scanf_s("%s", s, sizeof(s));
	printf("%s", s);
}