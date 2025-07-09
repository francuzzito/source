#include <iostream>

int main() {
	// predefined variables.
	int number;

	// prompt user for input
	std::cout << "enter a number: ";
	std::cin >> number;

	// check if the number is even or odd.
	if (number % 2 == 0)
		std::cout << "the number is even.\n";
	else
		std::cout << "the number is odd.\n";

	return 0;
}