#include <stdio.h>

//�迭�� Ȱ��
int main() {
	// 1. �Է¹��� ���ڵ��� �Ųٷ� ����غ���
	int n;
	int arr[1000];

	printf("�Է��� ������ ���� : ");
	scanf_s("%d",&n);
	
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d",&arr[i]);

	}

	for (int i = n-1; i >= 0; i--)
	{
		printf_s("%d ",arr[i]);

	}
	printf("\n");
	
	// 2. �Է¹��� ���ڵ��� �ִ밪 ���غ���
	int max = arr[0];
	for (int i = 1; i<n; i++) 
	{
		if (max<arr[i])
		{
			max = arr[i];
		}
	}
	printf("�ִ밪�� : %d\n",max);
	
	
	// 3. �Է¹��� ���ڵ��߿��� ¦���� ���� ���غ���
	int k =0;
	for (int i = 0; i<n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			k++;
		}
	}
	printf("¦���� ������ : %d\n",k);
}