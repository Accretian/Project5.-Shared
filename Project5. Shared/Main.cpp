#include <iostream>

int main() {

	int weekDay = 0;
	int daysCount = 0;

	std::cin >> weekDay >> daysCount;

	

	for (int i = 1; i <= daysCount; i++) {
		for (int j = 1; j <= 7; j++) {
			std::cout << '\t';
			if ((j == weekDay) && (i <= daysCount)) {
				std::cout << i;
				i++;
				weekDay++;
			}
		}
		weekDay = 1;
		std::cout << '\n';






	}









	int dontCloseThisProgram;

	std::cin >> dontCloseThisProgram;




}