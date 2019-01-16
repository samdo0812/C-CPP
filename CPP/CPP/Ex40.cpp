#include <stdio.h>
//type def(타입 정의)
 
int main() {
	typedef int Int32;
	Int32 n = 20;

	printf_s("%d\n",n);
	printf_s("%d\n", sizeof(Int32));
}