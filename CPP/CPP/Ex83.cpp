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
	android::set();	//google:: 생략가능, 모호성이 발생하지 않아 구별 가능

	cout << ::n << endl;
	cout << google::n << endl;
	cout << google::android::n << endl;
}