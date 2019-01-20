#include <stdio.h>

int main() {
	FILE *in , *out; //스트림

	int n;

	in = fopen("Ex60_inPut.txt", "r");
	//out = fopen("Ex60_outPut.txt", "w");
	out = fopen("Ex60_outPut.txt", "a");	//결과 그대로 유지


	fscanf(in,"%d ", &n);
	fprintf(out,"%d\n", n);

	fclose(in);
	fclose(out);
}