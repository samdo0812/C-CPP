#include <iostream>

namespace a
{
	int n;
}

namespace b
{
	int n;
}

using namespace std;
int main() {
	
	a::n = 10;
	b::n = 20;

	//name space 
	//std::cout << "Hello, World!" << std::endl;
	cout << "Hello, World!" << endl;

}