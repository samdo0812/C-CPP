#include <stdio.h>
//��� �Լ� , recursion

void rec(int n) {
	if (n > 5) return;
	printf_s("n = %d\n", n);
	rec(n + 1);
}

int main() {
	rec(1);
}