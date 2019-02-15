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
			n = 30;	//컴파일러가 n이 없으니 밖에서 찾게되고, google의 n이 30으로 바뀌게 됨
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