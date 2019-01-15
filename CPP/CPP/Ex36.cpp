#include <stdio.h>
/*
정수 하나를 매개변수로 받아
그 수가 짝수이면,0 홀수이면 1을 반환하는 함수 작성
*/

int parity(int n) {
	if (n % 2 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main() {

	printf_s("%d\n", parity(5));
	printf_s("%d\n", parity(-3));
	printf_s("%d\n", parity(6));

}