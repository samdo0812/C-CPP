#include <stdio.h>

//��������
int itemCnt = 0;
int money = 100;


int buyitem(int cost, int cnt) {
	if (money < cost) 
	{
		printf_s("�ܾ��� �����մϴ�.\n");
		return -1;

	}
	
		itemCnt += cnt;
		money -= cost;
		printf_s("�������� ���� �߽��ϴ�.\n");
		printf_s("	�������� ���� : %d\n", itemCnt);
		printf_s("	�ܾ� : %d\n", money);
		return 0;
	
}

int main() {
	int result;
	result = buyitem(30, 5);

	if (result = -1) {
		printf_s("���� �����Ͻñ���.\n");
	}

	result = buyitem(5000, 7);
	
}