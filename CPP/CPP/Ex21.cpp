#include <stdio.h>

int main() {
	int arr[3][3] = { 0 };

	//�ּҸ� �̸� �� �� ������ 100�̶�� �ϰ�
	printf_s("%d\n", &arr); //100
	printf_s("%d\n", arr);	//100
	printf_s("%d\n", *arr);	// 100	1���� �迭�� ���� �迭�� ù��° ��� �ּҰ�

	printf_s("%d\n", &arr[0]); //100
	printf_s("%d\n", arr[0]);	//100
	printf_s("%d\n", *arr[0]);	//0
	
	printf_s("%d\n", &arr[0][0]);	//100
	printf_s("%d\n", arr[0][0]);	//0
}