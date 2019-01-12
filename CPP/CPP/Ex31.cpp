//prototype : 원형, 시제품
//선언(함수이름, 형, 매개변수만 적고 기능 구현은 안함

#include <stdio.h>
void walk(int distance);
void rotate(int );	//변수타입만 적어도 괜찮음
void drawSquare();

int main() {
	drawSquare();
}

void walk(int distance) {
	printf_s("%d cm를 걸었습니다.\n", distance);
}

void rotate(int angle) {
	printf_s("%d 도 회전을 했습니다.\n", angle);
}

void drawSquare() {
	for (int i = 0; i <= 4; i++)
	{
		walk(10);
		rotate(90);
	}
}