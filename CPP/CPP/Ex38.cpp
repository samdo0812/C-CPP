#include <stdio.h>
void rec(int n) {
	if (n == 0) return;
	printf_s("%d", n);
	rec(n - 1);
	printf_s("%d", n);
}

int main() {
	rec(5);
}