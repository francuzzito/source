#include "main.h"
#include <iostream>

// here we got our main entry point.
int main() {
	// choose beetween functions by commenting or uncommenting them out for now..
	// callable_functions::basic_calculator();
	// callable_functions::even_or_odd();
	// callable_functions::hello_world();
	// callable_functions::input_output();
	// callable_functions::simple_loop();
	// callable_functions::multiplication_table();
	// callable_functions::sum_of_array();
	// callable_functions::factorial_calculator();
	// callable_functions::palindrome_checker();

	{ // simple function method.
		const int result = callable_functions::simple_function();
		std::cout << "result of simple function: " << result << "\n";
	}

	return 0;
}