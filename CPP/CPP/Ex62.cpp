#include <stdio.h>

int main() {
	FILE *in = fopen("Ex1.cpp", "r");

	char ch;
	while (!feof(in))	//파일을 끝까지 읽었을 때 true를 반환
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