#include <stdio.h>
// ����Ʈ ����
// << >> 
int main() {
	char a = 22;	//char -128 ~ 127

	printf("%d\n", a << 1 );
	printf("%d\n", a << 3 );
	printf("%d\n", a << 6 );
	

	printf("%d\n", a >> 1);
	printf("%d\n", a >> 3);
	printf("%d\n", a >> 6);

}
