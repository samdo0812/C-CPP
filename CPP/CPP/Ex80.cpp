#include <iostream>

using namespace std;

int n;
void set();

namespace ms {
	int n;
	void set();
}

namespace google {
	int n;
	void set();
}

int main() {
	::set();
	ms::set();
	google::set();

	cout << ::n << endl;
	cout << ms::n << endl;
	cout << google::n << endl;
}

void ::set() {
	n = 10;
}

void ms::set() {
	n = 20;
}

void google::set() {
	n = 30;	
}

