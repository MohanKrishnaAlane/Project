#include<iostream>

void addOne(int& x)
{
	x += 1;
}
int main()
{
	void (*inc)(int&) = addOne;
	auto inc2 = inc;
	int a{ 10 };
	std::cout << "a:" << a << std::endl;
	addOne(a);
	std::cout << "a:" << a << std::endl;
	inc(a);
	std::cout << "a:" << a << std::endl;
	inc2(a);
	std::cout << "a:" << a << std::endl;
	
}