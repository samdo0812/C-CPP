#include <stdio.h>

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	//4byte * 10�� = 40byte

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)//sizeof�� 40byte�� ��ȯ�Ѵ�. 
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}