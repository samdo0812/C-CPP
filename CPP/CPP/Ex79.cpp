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

//특정한 네임스페이스 안에서 함수나 변수 소속을 밝히지 않았을 경우 자신이 속한 네임스페이스 안의 변수, 함수
