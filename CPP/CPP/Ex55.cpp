#include <stdio.h>
//#define SQUARE(X) (X * X)
#define SQUARE(X) ((X) * (X))

int main() {
	int a;
	scanf("%d",&a);

	//printf("%d\n", 100 / SQUARE(a));
	printf("%d\n", SQUARE(a - 1));
}