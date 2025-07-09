#include <iostream>
#include "wrappers/wrapper.h"

namespace callable_functions {
	// ask the user for a number, then print whether it's even or odd.
	void even_or_odd() {
		// predefined variables.
		int number = wrappers::get_valid_int("enter a number: ");

		// check if the number is even or odd.
		if (number % 2 == 0)
			std::cout << "the number is even.\n";
		else
			std::cout << "the number is odd.\n";
	}
}
