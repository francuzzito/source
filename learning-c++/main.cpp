#include "main.h"
#include <iostream>
#include "wrappers/wrapper.h"

// here we got our main entry point.
int main() {
	// predeclare variable to hold the user's choice.
    int choice;

	// loop until the user chooses to exit.
    do {
        std::cout << "choose a function to run:\n";
        std::cout << "1. basic Calculator\n";
        std::cout << "2. even or odd\n";
        std::cout << "3. hello world\n";
		std::cout << "4. input output\n";
		std::cout << "5. simple loop\n";
		std::cout << "6. multiplication table\n";
		std::cout << "7. sum of array\n";
		std::cout << "8. factorial calculator\n";
		std::cout << "9. palindrome checker\n";
		std::cout << "10. simple function\n";
		
        std::cout << "0. exit\n";
        // use the wrapper here for safe int input:
        choice = wrappers::get_valid_int("enter choice: ");

        switch (choice) {
        case 1:
            callable_functions::basic_calculator();
            break;
        case 2:
            callable_functions::even_or_odd();
            break;
        case 3:
            callable_functions::hello_world();
            break;
        case 4:
            callable_functions::input_output();
            break;
        case 5:
            callable_functions::simple_loop();
            break;
        case 6:
            callable_functions::multiplication_table();
            break;
        case 7:
            callable_functions::sum_of_array();
            break;
        case 8:
            callable_functions::factorial_calculator();
            break;
        case 9:
            callable_functions::palindrome_checker();
            break;
        case 10: { // simple function method.
            const int result = callable_functions::simple_function();
            std::cout << "result of simple function: " << result << "\n";
            break;
        }
        case 0:
            std::cout << "goodbye!\n";
            break;
        default:
            std::cout << "invalid choice, try again.\n";
        }
    } while (choice != 0);


	return 0;
}