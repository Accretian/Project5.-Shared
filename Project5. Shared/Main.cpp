#include <iostream>

int main() {

	int weekDay = 0;
	int daysCount = 0;

	std::cin >> weekDay >> daysCount;

	for (int i = 1; i <= daysCount;) {
		for (int j = 1; j <= 7; j++) {
			if (j == weekDay) {
				if (i <= daysCount) {
					if (i < 10)
						std::cout << " ";
					std::cout << i;
					if (j < 7) {
						std::cout << " ";
					}
					i++;
					weekDay++;
				}
			}
			else
				std::cout << "   ";
		}
		weekDay = 1;
		std::cout << '\n';






	}









	int dontCloseThisProgram;

	std::cin >> dontCloseThisProgram;




}