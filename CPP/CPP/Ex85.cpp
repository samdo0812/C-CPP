#include <iostream>

using namespace std;

class MyClass {
public:
	void PrintTis() {	//this 포인터를 보이지 않는 매개변수로 받음.
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