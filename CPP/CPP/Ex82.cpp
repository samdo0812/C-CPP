#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

namespace google {
	void set();

	namespace android {
		void set();
		int n;
	}
	int n;
}

int main() {
	::set();
	google::set();
	google::android::set();

	cout << ::n << endl;
	cout << google::n << endl;
	cout << google::android::n << endl;

}
void google::set() {
	n = 20;
}

void google::android::set() {
	n = 30;
}