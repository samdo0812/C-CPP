#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "Hello";

	//1. ����
	int len;
	len = strlen(str);
	
	printf_s("���ڿ��� ���� : %d\n",len);
	
	//2. ����
	char str1[] = "Hello";
	char str2[100];

	strcpy(str2, str1);
	printf("str2�� �� : %s\n" , str2);

	//3. �����̱�
	char str3[100] = "Hello ";
	strcat(str3, "World!");
	printf("%s\n", str3);

	//4. �ι��� ��
	char str4[] = "sample";
	char str5[] = "simple";

	int cmp = strcmp(str4,str5);
	printf_s("%d\n", cmp);
	 
}
