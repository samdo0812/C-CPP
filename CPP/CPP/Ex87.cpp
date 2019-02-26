#include <iostream>

using namespace std;
//������ : ��� ���� �ʱ�ȭ
//�Ҹ��� : �޸� ����

//���Ҽ�(real �Ǽ�, imag ���)
class Complex {
public:

	Complex() {
		real = 0;
		imag = 0;
	}

	Complex(double real_, double imag_) {
		real = real_;
		imag = imag_;
	}

	double getReal() {
		return real;
	}

	void setReal(double real_) {
		real = real_;
	}

	double getImag() {
		return imag;
	}

	void setImag(double imag_) {
		imag = imag_;
	}

private:
	double real;
	double imag;
};

int main() {
	Complex c1;
	Complex c2 = Complex(2, 3);
	Complex c3(2, 3);

	cout << "c1 = " << c1.getReal() << ", " << c1.getImag() << endl;
	cout << "c2 = " << c2.getReal() << ", " << c2.getImag() << endl;
	cout << "c3 = " << c3.getReal() << ", " << c3.getImag() << endl;
}