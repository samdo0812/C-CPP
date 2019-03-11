#include <iostream>

/*
1. 매개변수의 상수화(모든 함수)
2. 메소드의 상수화(멤버 메소드)
*/

using namespace std;

class Account {
public:
	Account() :money(0) {}
	Account(int money) : money(money) {}

	void Deposit(const int d) {	//매개변수의 상수화
		money += d;
		cout << d << " 원을 예금" << endl;
	}
	
	void Draw(const int d) {
		if (money >= d) 
		{
			money -= d;
			cout << d << " won을 인출" << endl;
		}
	}

	int ViewMoney() const{	//메소드의 상수화
		return money;
	}

	/*
	거의 의미가 없음. 리턴타입 자체가 상수형이라는 의미
	const int ViewMoney() {			
		return money;
	}
	*/
private:
	int money;
};

int main() {
	Account samdo(100);

	samdo.Deposit(100);
	samdo.Draw(20);

	cout << samdo.ViewMoney() << endl;
}