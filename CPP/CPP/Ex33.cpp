#include <stdio.h>

//���丮��
// 5! = 5*4*3*2*1 = 120
// n! = n * (n-1)

//n�� �Ű����� -> n!�� return
int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);

	
}

int main() {
	printf_s("%d", factorial(5));
}