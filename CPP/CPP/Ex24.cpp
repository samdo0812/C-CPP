#include <stdio.h>

//��������
int itemCnt = 0;
int money = 100;


void buyitem(int cost , int cnt) {
	itemCnt += cnt;
	money -= cost;
	printf_s("�������� ���� �߽��ϴ�.\n");
	printf_s("	�������� ���� : %d\n", itemCnt);
	printf_s("	�ܾ� : %d\n", money);

}

int main() {
	//cost = 30;
	buyitem(30,5);

	//cost = 50;
	buyitem(50,7);

}