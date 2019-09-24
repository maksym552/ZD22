#include <iostream>

float numberCinError(std::string sentence) {
	float a;
	while (true) {
		std::cout << sentence;
		std::cin >> a;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits <std::streamsize> ::max(), '\n');
			continue;
		}
		else break;
	}
	return a;
}

void drawTree(int size) {
	for (int i = 0; i != size; i++) {

		for (int j = 0; j != (size-i); j++) {
			std::cout << " ";
		}
		for (int k = 0; k != i+1+i; k++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i != (size); i++) {
		std::cout << " ";
	}
	std::cout << "#";
}

int main() {

	drawTree(numberCinError("Podaj wysokosc choinki"));

	return 0;
}