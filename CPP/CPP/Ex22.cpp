#include <stdio.h>

int main() {
	int arr[3][3] = { 0 };

	printf_s("%d\n", &arr[0][0]);	//100

	printf_s("%d\n", arr[0] + 1);	//104
	printf_s("%d\n", &arr[0] + 1);	//112
	printf_s("%d\n", arr[0] + 1);	//112
	printf_s("%d\n", &arr + 1);		//136
}