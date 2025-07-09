#include <iostream>
#include <__msvc_ostream.hpp>

namespace callable_functions {
	// ask for a number and compute its factorial (e.g., 5! = 5 x 4 x 3 x 2 x 1).
	void factorial_calculator() {
		int number;
		unsigned long long factorial = 1;
		std::cout << "enter a positive integer: ";
		std::cin >> number;
		if (number < 0) {
			std::cout << "factorial is not defined for negative numbers." << std::endl;
			return;
		}
		for (int i = 1; i <= number; ++i) {
			factorial *= i;
		}
		std::cout << "factorial of " << number << " = " << factorial << std::endl;
	}

}