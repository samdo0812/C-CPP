#include <stdio.h>

int main() {
	FILE *in , *out; //��Ʈ��

	int n;

	in = fopen("Ex60_inPut.txt", "r");
	//out = fopen("Ex60_outPut.txt", "w");
	out = fopen("Ex60_outPut.txt", "a");	//��� �״�� ����


	fscanf(in,"%d ", &n);
	fprintf(out,"%d\n", n);

	fclose(in);
	fclose(out);
}