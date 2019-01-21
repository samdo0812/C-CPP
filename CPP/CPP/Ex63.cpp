#include <stdio.h>

//	getchar / putcahr
//	gets / puts
//	속도면에서는 scanf와 printf보다 빠름

int main() {
	char ch;
	
	ch = getchar();
	putchar(ch);

//---------------------------------------
// *참고 scanf로 받으면 공백을 기준으로 받아짐

	char str[100];
	gets_s(str);
	puts(str);
}