/*
* Thanks to chatGPT!!!
1. "The enumerators can only be accessed in the scope of the enumeration."
This statement means that the named values (enumerators) defined within an enumeration are only accessible within the scope of that enumeration. They are not visible outside of the enumeration itself.

2."The enumerators don’t implicitly convert to int."
Enumerators in C++ are not implicitly convertible to int. Although the underlying type of enumerators is int by default, you need to explicitly cast the enumerators to int if you want to use them as integers.

3."The enumerators aren’t imported into the enclosing scope."
Enumerators are not automatically imported into the enclosing scope. They are only accessible using the scope resolution operator :: within the enumeration's scope.

4."The type of the enumerators is by default int. Therefore, we can forward declare the enumeration."
By default, the type of enumerators in C++ is int. This means that if you don't specify a different underlying type explicitly, the enumerators will be of type int. Forward declaring an enumeration is possible because the type of the enumerators is known (i.e., int).
*/

#include <iostream>

enum oldEnum
{
one = 1,
ten = 10,
hundred = 100,
thousand = 1000
};
enum struct NewEnum
{
	one = 1,
	ten = 10,
	hundred = 100,
	thousand = 1000
};

int main() {

	std::cout << std::endl;

	std::cout << "C++11= " << 2 * thousand + 0 * hundred + 1 * ten + 1 * one << std::endl;
	std::cout << "C++11= " << 2 * static_cast<int>(NewEnum::thousand) +
		0 * static_cast<int>(NewEnum::hundred) +
		1 * static_cast<int>(NewEnum::ten) +
		1 * static_cast<int>(NewEnum::one) << std::endl;

}