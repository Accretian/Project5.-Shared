#include <iostream>

int main() {

	int weekDay = 0;
	int daysCount = 0;

	std::cin >> weekDay >> daysCount;



	for (int i = 1; i <= daysCount;) {
		for (int j = 1; j <= 7; j++) {
			if (j == weekDay) {
				if (i <= daysCount) {
					std::cout << i << '\t';
					i++;
					weekDay++;
				}
			}
			else
				std::cout << '\t';
		}
		weekDay = 1;
		std::cout << '\n';






	}









	int dontCloseThisProgram;

	std::cin >> dontCloseThisProgram;




}