#include <iostream>

using namespace std;

int n;

void set() {
	n = 10;
}

namespace ms {
	int n;
	void set() {
		n = 20;	// ms::n = 20;
	}
}

namespace google {
	int n;
	void set() {
		n = 30;	//google::n = 30;
	}
}

int main() {
	::set();
	ms::set();
	google::set();

	cout << ::n << endl;
	cout << ms::n << endl;
	cout << google::n << endl;
}

//Ư���� ���ӽ����̽� �ȿ��� �Լ��� ���� �Ҽ��� ������ �ʾ��� ��� �ڽ��� ���� ���ӽ����̽� ���� ����, �Լ�
