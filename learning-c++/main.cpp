#include <iostream>

// ask the user for a number and print its multiplication table up to 10.
int main() {
	// predefined variables.
	int number;
	std::cout << "enter a number: ";
	std::cin >> number;

	// print the multiplication table for the number.
	for (int i = 1; i <= 10; ++i) {
		std::cout << number << " * " << i << " = " << number * i << std::endl;
	}

	return 0;
}