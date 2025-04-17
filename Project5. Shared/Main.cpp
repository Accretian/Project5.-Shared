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


	//Ошибка.    "xddxxdxdxdxdxdx", "xxxxxxdxxxxxxxxxxxxxxxxx"  
	for (int i = 0; i < ((int)strin.length() - 1); i++) {
		while (i < (int)strin.length() && strin[i] == strin[i + 1])
			strin.erase(i, i + 1);
	}

	out.append(strin);

	while (out.length() < 4) {
		out.append("0");
	}

	if (out.length() > 4)
		out = out.substr(0, 4);

	std::cout << out;



	std::cin >> out;


}