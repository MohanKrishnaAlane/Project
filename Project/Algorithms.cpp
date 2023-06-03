#include<iostream>
#include<numeric>
#include<vector>
int main()
{
	std::vector<int> aVector = { 1,2,3,4,5,6,8,9,10 };
	auto result = std::accumulate(aVector.begin(), aVector.end(), 1, [](int a,int b) {return a * b; });
	std::cout << result;
	return 0;
}