/*
	class = �ڷ����� + �ڷ�ó��
	Ŭ����(Ÿ��) : Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��Ƶ� Ʋ(�ڷ���)

	��ü(Object) : �� Ʋ�� �̿��Ͽ� �� ��ü(����, �޸𸮻��� ����)
*/


#include <iostream>
using namespace std;


class TV	
{	
	//struct��� private�� ������Ѵ�. ���� class�̱� ������ �ڵ������� private ����
	bool powerOn;
	int channel;
	int volume;

public:
	void on() {
		powerOn = true;
		cout << "TV On" << endl;
	}
	void off() {
		powerOn = false;
		cout << "TV Off" << endl;
	}

	void setChannel(int cnl) {
		if (999>= cnl >= 1 )
		{
			channel = cnl;
			cout << "channel : " << cnl << endl;
		}
	}

	void setVolume(int vol) {

		if (100>= vol >= 0)
		{
			volume = vol;
			cout << "volume : " << vol << endl;
		}
	}
};

int main() {
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);

}