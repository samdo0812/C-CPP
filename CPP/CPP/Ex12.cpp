#include <stdio.h>

//�迭 ������
int main() {
	int arr[3] = { 1,2,3 };

	int(*ptr_arr)[3]; //���� 3�� int�� �迭�� ����Ű�� �����͸� ����
	ptr_arr = &arr;

	for (int i = 0; i < 3; i++) 
	{
		printf_s("%d\n" , (*ptr_arr)[i]);
	}

}