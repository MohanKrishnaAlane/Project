#include<iostream>
#include<string_view>
using namespace std;
std::string_view StartFromWord(std::string_view str, std::string_view word)
{
	return str.substr(str.find(word)); // substr creates only a new view 
}

int main() {
	// call:
	std::string str {"Hello Amazing Programming Environment"};

	auto subView = StartFromWord(str, "Programming Environment");
	std::cout << subView << '\n';
}