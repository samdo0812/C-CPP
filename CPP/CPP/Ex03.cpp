#include <stdio.h>

//배열의 활용
int main() {
	// 1. 입력받은 숫자들을 거꾸로 출력해보기
	int n;
	int arr[1000];

	printf("입력할 숫자의 개수 : ");
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
	
	// 2. 입력받은 숫자들의 최대값 구해보기
	int max = arr[0];
	for (int i = 1; i<n; i++) 
	{
		if (max<arr[i])
		{
			max = arr[i];
		}
	}
	printf("최대값은 : %d\n",max);
	
	
	// 3. 입력받은 숫자들중에서 짝수의 개수 구해보기
	int k =0;
	for (int i = 0; i<n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			k++;
		}
	}
	printf("짝수의 개수는 : %d\n",k);
}