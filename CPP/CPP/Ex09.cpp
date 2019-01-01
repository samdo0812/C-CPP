#include <stdio.h>
//arr = &arr[0]

int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	//printf_s("arrÀÇ °ª : %d\n" , arr);

	for (int i = 0; i < 10; i++)
	{
		printf_s("&arr[%d] = %d\n" ,i ,&arr[i]);
		printf_s("arr + %d = %d\n", i, arr+i);
	}
}