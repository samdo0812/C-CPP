#include <stdio.h>
/*
char str[] = "Hello";
printf_s("%s\n", &str[0]);  &str[0]���� ���� str�� ���� ����
0��° �ּҸ� �˷��ָ� Null ���� ���ö����� ���
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