#include <stdio.h>
/*
	1. arr == &arr[0]
	2. *arr == arr[0]
	3. arr + 1 = arr�� sizeof(*arr)�� ���� ��
*/


int main() {
	int arr[2][3] = { {1,2,3}, {4,5,6} };
	
	printf_s("%d\n", sizeof(arr));	//24,	4byte * 6���� ���
	printf_s("%d\n", sizeof(arr[0]));	//12,	4byte, 0��° ��
	printf_s("%d\n", sizeof(arr[0][0]));	//4 

	//�迭�ּҰ� = ù��° ��� ��
	printf_s("%d\n", &arr);	
	printf_s("%d\n", &arr[0]);	
	printf_s("%d\n", &arr[0][0]);	 
	printf_s("\n"); 

	int(*ptr)[3] = arr;	//int(*ptr)[3] = &arr[0];

	/*
	1. ptr[i] == arr[i]
	2. ptr[i][j] == arr[i][j]
	3. ptr = arr
	*/
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf_s("%d", ptr[i][j]);
		}
		printf_s("\n");
	}

}