//prototype : ����, ����ǰ
//����(�Լ��̸�, ��, �Ű������� ���� ��� ������ ����

#include <stdio.h>
void walk(int distance);
void rotate(int );	//����Ÿ�Ը� ��� ������
void drawSquare();

int main() {
	drawSquare();
}

void walk(int distance) {
	printf_s("%d cm�� �ɾ����ϴ�.\n", distance);
}

void rotate(int angle) {
	printf_s("%d �� ȸ���� �߽��ϴ�.\n", angle);
}

void drawSquare() {
	for (int i = 0; i <= 4; i++)
	{
		walk(10);
		rotate(90);
	}
}