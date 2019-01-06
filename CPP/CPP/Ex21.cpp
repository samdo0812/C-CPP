#include <stdio.h>

int main() {
	int arr[3][3] = { 0 };

	//주소를 미리 알 수 없으니 100이라고 하고
	printf_s("%d\n", &arr); //100
	printf_s("%d\n", arr);	//100
	printf_s("%d\n", *arr);	// 100	1차원 배열로 보고 배열의 첫번째 요소 주소값

	printf_s("%d\n", &arr[0]); //100
	printf_s("%d\n", arr[0]);	//100
	printf_s("%d\n", *arr[0]);	//0
	
	printf_s("%d\n", &arr[0][0]);	//100
	printf_s("%d\n", arr[0][0]);	//0
}