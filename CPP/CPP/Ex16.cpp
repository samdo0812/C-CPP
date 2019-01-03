#include <stdio.h>
/*
char str[] = "Hello";
printf_s("%s\n", &str[0]);  &str[0]으로 쓰나 str로 쓰나 같음
0번째 주소를 알려주면 Null 값이 나올때까지 출력
*/
int main() {
	char strings[3][10] = {"Hello", "World", "Kim"};
	char *p_str[3];

	for (int i = 0; i < 3; i++)
	{
		p_str[i] = &strings[i][0];	//strings[i]
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n" , p_str[i]);
	}
}