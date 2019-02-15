#include <iostream>

using namespace std;

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
		
		void set() {
			n = 30;	//�����Ϸ��� n�� ������ �ۿ��� ã�Եǰ�, google�� n�� 30���� �ٲ�� ��
		}
		int n;
	}
}

int main() {
	::set();
	google::set();
	google::android::set();

	cout << ::n << endl;
	cout << google::n << endl;
	cout << google::android::n << endl;

}