#include <stdio.h>

//전역변수
int itemCnt = 0;
int money = 100;


int buyitem(int cost, int cnt) {
	if (money < cost) 
	{
		printf_s("잔액이 부족합니다.\n");
		return -1;

	}
	
		itemCnt += cnt;
		money -= cost;
		printf_s("아이템을 구매 했습니다.\n");
		printf_s("	아이템을 개수 : %d\n", itemCnt);
		printf_s("	잔액 : %d\n", money);
		return 0;
	
}

int main() {
	int result;
	result = buyitem(30, 5);

	if (result = -1) {
		printf_s("돈이 부족하시군요.\n");
	}

	result = buyitem(5000, 7);
	
}