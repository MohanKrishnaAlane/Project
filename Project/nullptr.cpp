/*
The variable c is of type int, and the variable res is of type pointer to int: int*. Pretty simple, right? The expression a+b+c is pointer arithmetic.

An alternative is the NULL macro, but the issue is that it implicitly converts to int.

The new null pointer, nullptr, cleans up the ambiguity of the number 0 and the macro NULL. nullptr is of type std::nullptr_t.
*/
#include <iostream>
#include <typeinfo>

int main() {

	std::cout << std::endl;

	int a = 0;
	int* b = 0;
	auto c = 0;
	std::cout << typeid(c).name() << std::endl;

	auto res = a + b + c;
	std::cout << "res: " << res << std::endl;
	std::cout << typeid(res).name() << std::endl;

}