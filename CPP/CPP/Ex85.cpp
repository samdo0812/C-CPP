#include <iostream>

using namespace std;

class MyClass {
public:
	void PrintTis() {	//this �����͸� ������ �ʴ� �Ű������� ����.
		cout << "My adress : " << this << endl;
	}
};
int main() {
	MyClass a, b;

	cout << "a's adress : " << &a << endl;
	cout << "b's adress : " << &b << endl;

	a.PrintTis();
	b.PrintTis();
}