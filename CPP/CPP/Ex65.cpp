#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//time(NULL); // 1970/01/01 00:00:00�� ���� ���� �ð�, �� ����
	
	srand(time(NULL));
	for (int i = 0; i < 9; i++)
	{
		printf("%d\n", rand() % 10 + 1);
	}
}