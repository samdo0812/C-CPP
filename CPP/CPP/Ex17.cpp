#include <stdio.h>
/*
100개 이하의 정수를 입력받아
첫줄에 짝수 번째 숫자들을 순서대로 출력하고,
다음 줄에 홀수번째 숫자들을 순서대로 출력

입력 예
7
3 1 4 1 5 9 2

출력 예
1 1 9
3 4 5 2
*/
int main() {
	
	int n;
	int arr[105];
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i < n; i += 2)
	{
		printf_s("%d" , arr[i]);
	}
	printf_s("\n");

	for (int i = 0; i < n; i += 2)
	{
		printf_s("%d", arr[i]);
	}
	printf_s("\n");
}