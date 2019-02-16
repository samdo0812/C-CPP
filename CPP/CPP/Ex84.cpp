/*
	class = 자료저장 + 자료처리
	클래스(타입) : 특정한 용도를 수행하기 위한 변수와 함수를 모아둔 틀(자료형)

	객체(Object) : 그 틀을 이용하여 찍어낸 개체(변수, 메모리상의 공간)
*/


#include <iostream>
using namespace std;


class TV	
{	
	//struct라면 private로 해줘야한다. 현재 class이기 때문에 자동적으로 private 변수
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