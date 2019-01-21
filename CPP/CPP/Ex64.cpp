#include <stdio.h>

//	sscanf / sprintf

int main() {
	//char str[] = "450";
	//int n;

	//sscanf(str, "%d", &n);
	//printf("%d\n" , n);
	
	//-------------------------------------------

	int n = 450;
	char str[100];

	sprintf(str, "%d", n);
	printf("%s\n", str);
}