#include <stdio.h>

//전역변수
int itemCnt = 0;
int money = 100;


void buyitem(int cost , int cnt) {
	itemCnt += cnt;
	money -= cost;
	printf_s("아이템을 구매 했습니다.\n");
	printf_s("	아이템을 개수 : %d\n", itemCnt);
	printf_s("	잔액 : %d\n", money);

}

int main() {
	//cost = 30;
	buyitem(30,5);

	//cost = 50;
	buyitem(50,7);

}