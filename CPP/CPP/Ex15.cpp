#include <stdio.h>
/*
	배열 포인터 : 배열을 가리키는 포인터
	포인터 배열 : 포인터들이 배열
*/
int main() {
	int arr[4] = { 1,2,3,4 };
	int *ptr[4];

	for (int i = 0; i < 4; i++)
	{
		ptr[i] = &arr[i];
	}

	for (int i = 0; i < 4; i++)
	{
		printf_s("%d ", *ptr[i]);

	}
	printf_s("\n");


}