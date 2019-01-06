#include <stdio.h>

int main() {
	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	printf_s("%d\n", arr);
	for (int i = 0; i < 7; i++)
	{
		printf_s("%d %d\n", arr+i, *(arr + i));

	}
}