#include <stdio.h>
// ��Ʈ ������ & | ^ ~

int main() {
	char a = 12, b = 10;
	printf("%d\n" , a & b);		// 1100 & 1010 : 1000
	printf("%d\n" , a | b);		// 1100 | 1010 : 1110
	printf("%d\n" , a ^ b);		// 1100 ^ 1010 : 0110
	printf("%d\n" , ~a);		// ~1100 : 11110011
}