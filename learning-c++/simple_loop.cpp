#include <iostream>

namespace callable_functions {
	// print numbers from 0 to 10 using a loop.
	void simple_loop() {
		// predefined variables.
		int number = 0;

		while (number <= 10) {
			std::cout << number << "\n";
			number++; // increment by one.
		}
	}
}