#include <stdio.h>

//배열 포인터
int main() {
	int arr[3] = { 1,2,3 };

	int(*ptr_arr)[3]; //길이 3인 int형 배열을 가리키는 포인터를 선언
	ptr_arr = &arr;

	for (int i = 0; i < 3; i++) 
	{
		printf_s("%d\n" , (*ptr_arr)[i]);
	}

}