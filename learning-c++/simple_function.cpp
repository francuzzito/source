#include "wrappers/wrapper.h"

namespace callable_functions {
	// write a function to add two numbers and return the result.
    int simple_function() {
        std::cout << "this is a simple function that returns a value.\n";

        int a = wrappers::get_valid_int("enter first number: ");
        int b = wrappers::get_valid_int("enter second number: ");

        return a + b; // return the sum of the two numbers.
    }
}
