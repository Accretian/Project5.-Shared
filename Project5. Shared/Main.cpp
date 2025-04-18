#include <iostream>
#include <string>
#include <algorithm>

int main() {

	std::string strin = "Undefined.";
	std::cin >> strin;

	std::string out = "Undefined.";

	if (!strin.empty()) {
		out = "";
		out.append(strin.substr(0, 1));
		strin.erase(0, 1);
	}

	//Добавить в важные txt. aaaaammonium to mmnm
	strin.erase(std::remove_if(strin.begin(), strin.end(), [](char chr) {return chr == 'a' || chr == 'e' || chr == 'h' || chr == 'i' ||
		chr == 'o' || chr == 'u' || chr == 'w' || chr == 'y';}), strin.end());

	for (char ch : {'b', 'f', 'p', 'v'}) {
		std::replace(strin.begin(), strin.end(), ch, '1');
	}

	for (char ch : {'c', 'g', 'j', 'k', 'q', 's', 'x', 'z'}) {
		std::replace(strin.begin(), strin.end(), ch, '2');
	}

	for (char ch : {'d', 't'}) {
		std::replace(strin.begin(), strin.end(), ch, '3');
	}

	for (char ch : {'l'}) {
		std::replace(strin.begin(), strin.end(), ch, '4');
	}

	for (char ch : {'m', 'n'}) {
		std::replace(strin.begin(), strin.end(), ch, '5');
	}

	std::replace(strin.begin(), strin.end(), 'r', '6');

	if (strin.length() != 0)
		out.append(strin.substr(0, 1));

	for (char ch : strin) {
		if (ch != out.back())
			out.push_back(ch);
	}

	while (out.length() < 4) {
		out.push_back('0');
	}

	if (out.length() > 4)
		out = out.substr(0, 4);

	std::cout << out;


}