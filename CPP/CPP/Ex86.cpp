/*
������ : ��ü�� ���� �� �� �ڵ����� ȣ��Ǵ� �Լ�
�Ҹ��� : ��ü�� �Ҹ� �� �� �ڵ����� ȣ��Ǵ� �Լ�
*/

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() {	//������
		cout << "������ ȣ��" << endl;
	}

	~MyClass()	//�Ҹ���
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

//MyClass globalObj;

void testLocal() {
	cout << "test LocalObj start" << endl;
	MyClass localObj;
	cout << "test LocalObj end" << endl;
}

int main() {
	cout << "main start" << endl;
	testLocal();
	cout << "main end" << endl;

}