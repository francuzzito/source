#include <iostream>

namespace callable_functions {
	// ask the user for 5 numbers, store them in an array, and print their sum.
	void sum_of_array() {
		constexpr int SIZE = 5;
		int numbers[SIZE];
		int sum = 0;
		for (int i = 0; i < SIZE; ++i) {
			std::cout << "enter number " << (i + 1) << ": ";
			std::cin >> numbers[i];
			sum += numbers[i];
		}
		std::cout << "the sum of the entered numbers is: " << sum << "\n";
	}
}
