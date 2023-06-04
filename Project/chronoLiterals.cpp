#include <iostream>
#include <chrono>

using namespace std::literals::chrono_literals;
int main()
{
	typedef std::chrono::duration<long long, std::ratio<2700>> hour;
	auto schoolHour = hour(1); //45 min

	auto shortBreak = 300s;
	auto longBreak = 0.25h;
	auto schoolWay = 15min;
	auto homeWork = 2h;

	auto schoolDayInSeconds = 2 * schoolWay + 6 * schoolHour +
		4 * shortBreak + longBreak + homeWork;

	std::cout << "Scholl day in seconds:" << schoolDayInSeconds.count() << std::endl;
	std::chrono::duration<double, std::ratio<3600>> schoolDayInHours = schoolDayInSeconds;
	std::chrono::duration<double, std::ratio<60>> schoolDayInMinutes = schoolDayInSeconds;
	std::chrono::duration<double, std::ratio<1,1000>> schoolDayInMilli = schoolDayInSeconds;
	
	std::cout << "Scholl day in hours:" << schoolDayInHours.count() << std::endl;
	std::cout << "Scholl day in hours:" << schoolDayInMinutes.count() << std::endl;
	std::cout << "Scholl day in hours:" << schoolDayInMilli.count() << std::endl;
	
	std::cout << std::endl;
	return 0;
}