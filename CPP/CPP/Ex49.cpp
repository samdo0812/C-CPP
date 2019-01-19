#include <stdio.h>

typedef int Point[2];
typedef Point *PointPtr;

int main() {
	Point p = { 3,4 };	//int p[2] {3,4};
	PointPtr pp = &p;	//Point *pp = &p;

	printf("%d %d %d\n", **pp, (*pp)[0], (*pp)[1]);
	//**pp = *p = p[0]
}