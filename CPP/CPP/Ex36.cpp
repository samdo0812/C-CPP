#include <stdio.h>
/*
���� �ϳ��� �Ű������� �޾�
�� ���� ¦���̸�,0 Ȧ���̸� 1�� ��ȯ�ϴ� �Լ� �ۼ�
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