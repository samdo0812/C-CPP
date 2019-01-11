#include <stdio.h>

int noMeaning() {
	printf_s("first\n");
	return 1;	//return을 만나면 즉시종료 후 값 반환

	printf_s("second\n");
	return 2;
}

int main() {
	int a;
	a = noMeaning();
	
	printf_s("반환된 값 : %d\n" , a);	//1
}