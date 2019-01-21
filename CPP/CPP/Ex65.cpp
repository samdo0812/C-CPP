#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//time(NULL); // 1970/01/01 00:00:00로 부터 지난 시간, 초 단위
	
	srand(time(NULL));
	for (int i = 0; i < 9; i++)
	{
		printf("%d\n", rand() % 10 + 1);
	}
}