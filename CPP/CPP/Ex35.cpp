#include <stdio.h>

void printArr(int arr[2][3]) {	//int arr[2][3] = (*arr)[3]
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf_s("%d " , arr[i][j]);
		}
		printf_s("\n");
	}
}

int main() {
	int arr[2][3] = { {1,2,3} , {4,5,6} };
	printArr(arr);	//arr = &arr[0]
}