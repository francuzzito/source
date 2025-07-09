#include <iostream>
#include "wrappers/wrapper.h"

namespace callable_functions {
	// ask the user for a number and print its multiplication table up to 10.
	void multiplication_table() {
		// predefined variables.
		int number = wrappers::get_valid_int("enter a number: ");

		// print the multiplication table for the number.
		for (int i = 1; i <= 10; ++i) {
			std::cout << number << " * " << i << " = " << number * i << std::endl;
		}
	}
}