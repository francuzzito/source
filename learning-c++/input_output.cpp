#include <iostream>
#include <string>

namespace callable_functions {
	// ask the user for their name and age, then print it back.
	void input_output() {
		// predefine variables.
		std::string name;
		int age;

		// ask for name.
		std::cout << "what is your name? ";
		std::getline(std::cin >> std::ws, name);

		// and age.
		std::cout << "what is your age? ";
		std::cin >> age;

		// print the result.
		std::cout << "hello dear " << name << ", you are " << age << " years old.\n";
	}
} 