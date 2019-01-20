#include <stdio.h>

int main() {
	FILE *in, *out; //스트림

	int n;

	in = fopen("aaaaa", "r");
	printf("in = %d\n", in);	// 0 , 존재하지 않는 파일 -> NULL포인터 반환

	if(in != NULL)
	{
	fscanf(in, "%d ", &n);
	printf("%d\n", n);

	fclose(in);
	}
}