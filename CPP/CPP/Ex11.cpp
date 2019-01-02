/*
	1. arr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값 
*/

#include <stdio.h>

int main() {
	int arr[3] = { 1,2,3 };

	printf_s("arr = %d\n" , arr);
	printf_s("arr + 1 = %d\n", arr + 1);
	
	printf_s("&arr = %d\n", &arr);
	printf_s("&arr + 1 = %d\n", &arr + 1);	
	//배열을 가리키는 포인터에 1을 더하면 그 다음 배열을 가리키게 된다
	//배열 요소의 첫번째 주소가 배열의 주소, 요소3개니 3*4(int) 12 만큼 커짐


}