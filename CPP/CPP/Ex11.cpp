/*
	1. arr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr�� sizeof(*ptr)�� ���� �� 
*/

#include <stdio.h>

int main() {
	int arr[3] = { 1,2,3 };

	printf_s("arr = %d\n" , arr);
	printf_s("arr + 1 = %d\n", arr + 1);
	
	printf_s("&arr = %d\n", &arr);
	printf_s("&arr + 1 = %d\n", &arr + 1);	
	//�迭�� ����Ű�� �����Ϳ� 1�� ���ϸ� �� ���� �迭�� ����Ű�� �ȴ�
	//�迭 ����� ù��° �ּҰ� �迭�� �ּ�, ���3���� 3*4(int) 12 ��ŭ Ŀ��


}