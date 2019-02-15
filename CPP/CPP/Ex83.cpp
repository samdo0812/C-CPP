#include <iostream>

int n;
void set() {
	n = 10;
}

namespace google {
	int n;
	void set() {
		n = 20;
	}

	namespace android {
		int n;
		void set() {
			n = 30;
		}
	}
}

int main() {
	using namespace std;
	using namespace google;

	::set();
	google::set();
	android::set();	//google:: ��������, ��ȣ���� �߻����� �ʾ� ���� ����

	cout << ::n << endl;
	cout << google::n << endl;
	cout << google::android::n << endl;
}