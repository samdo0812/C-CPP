#include <stdio.h>
/*
	문자열을 매개변수로 받아 그 문자열에서 공백을
	제거하여 출력하는 함수를 작성
*/

void print_noSpace(const char str[]) {		//char *str
	for (int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] != ' ')
		printf_s("%c",str[i]);

	}
}

int main() {
	print_noSpace("Hello, World!\n");
	print_noSpace("My name is Samdo\n");
}