#include <stdio.h>

int main() {
	FILE *in, *out; //��Ʈ��

	int n;

	in = fopen("aaaaa", "r");
	printf("in = %d\n", in);	// 0 , �������� �ʴ� ���� -> NULL������ ��ȯ

	if(in != NULL)
	{
	fscanf(in, "%d ", &n);
	printf("%d\n", n);

	fclose(in);
	}
}