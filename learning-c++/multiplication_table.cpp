#include <iostream>

namespace callable_functions {
	// ask the user for a number and print its multiplication table up to 10.
	void multiplication_table() {
		// predefined variables.
		int number;
		std::cout << "enter a number: ";
		std::cin >> number;

		// check if the input is valid.
		if (std::cin.fail()) {
			// if the input is not a number, clear the error and ignore the rest of the line.
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "invalid input. please enter a valid number." << std::endl;
			return; // exit the function early.
		}

		// print the multiplication table for the number.
		for (int i = 1; i <= 10; ++i) {
			std::cout << number << " * " << i << " = " << number * i << std::endl;
		}
	}
}