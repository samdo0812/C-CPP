#include <stdio.h>

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	//4byte * 10개 = 40byte

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)//sizeof는 40byte를 반환한다. 
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}