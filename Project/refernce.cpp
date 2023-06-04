#include <iostream>

void xchg(int& x, int& y) { // Reference parameters
	int t = x;
	x = y;
	y = t;
}

int main() {
	int a = 10;
	int b = 20;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	xchg(a, b);
	std::cout << std::endl;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
}