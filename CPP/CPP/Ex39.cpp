#include <stdio.h>
/*
	���ڿ��� �Ű������� �޾� �� ���ڿ����� ������
	�����Ͽ� ����ϴ� �Լ��� �ۼ�
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