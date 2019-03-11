#include <iostream>

/*
1. �Ű������� ���ȭ(��� �Լ�)
2. �޼ҵ��� ���ȭ(��� �޼ҵ�)
*/

using namespace std;

class Account {
public:
	Account() :money(0) {}
	Account(int money) : money(money) {}

	void Deposit(const int d) {	//�Ű������� ���ȭ
		money += d;
		cout << d << " ���� ����" << endl;
	}
	
	void Draw(const int d) {
		if (money >= d) 
		{
			money -= d;
			cout << d << " won�� ����" << endl;
		}
	}

	int ViewMoney() const{	//�޼ҵ��� ���ȭ
		return money;
	}

	/*
	���� �ǹ̰� ����. ����Ÿ�� ��ü�� ������̶�� �ǹ�
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