#include <stdio.h>
/*
���� �ϳ��� �Ű������� �޾�
�� ���� ¦���̸�,0 Ȧ���̸� 1�� ��ȯ�ϴ� �Լ� �ۼ�
*/

int parity(int n) {
	return (n % 2 + 2) %2;
}
int main() {

	printf_s("%d\n", parity(5));
	printf_s("%d\n", parity(-3));
	printf_s("%d\n", parity(6));

}