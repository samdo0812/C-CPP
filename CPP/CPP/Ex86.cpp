/*
생성자 : 객체가 생성 될 때 자동으로 호출되는 함수
소멸자 : 객체가 소멸 될 때 자동으로 호출되는 함수
*/

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() {	//생성자
		cout << "생성자 호출" << endl;
	}

	~MyClass()	//소멸자
	{
		cout << "소멸자 호출" << endl;
	}
};

//MyClass globalObj;

void testLocal() {
	cout << "test LocalObj start" << endl;
	MyClass localObj;
	cout << "test LocalObj end" << endl;
}

int main() {
	cout << "main start" << endl;
	testLocal();
	cout << "main end" << endl;

}