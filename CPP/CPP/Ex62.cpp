#include <stdio.h>

int main() {
	FILE *in = fopen("Ex1.cpp", "r");

	char ch;
	while (!feof(in))	//������ ������ �о��� �� true�� ��ȯ
	{
		fscanf(in,"%c", &ch);
		printf("c ", ch);
	}
	fclose(in);
}
	
/*
	while (fscanf(in, "%c", &ch) != EOF)
	{
		printf("c ", ch);
	}
*/