#include <iostream>

namespace callable_functions {
	// ask for a number and compute its factorial (e.g., 5! = 5 x 4 x 3 x 2 x 1).
	void factorial_calculator() {
		// predefine variables.
		int number;
		unsigned long long factorial = 1;
		std::cout << "enter a positive integer: ";
		std::cin >> number;

		// check if the input is valid.
		if (std::cin.fail()){
			std::cout << "invalid input. please enter a positive integer." << std::endl;
			return;
		}

		// calculate the factorial.
		if (number < 0) {
			std::cout << "factorial is not defined for negative numbers." << std::endl;
			return;
		}

		// if the number is 0, its factorial is 1.
		for (int i = 1; i <= number; ++i) {
			factorial *= i;
		}
		std::cout << "factorial of " << number << " = " << factorial << std::endl;
	}

}