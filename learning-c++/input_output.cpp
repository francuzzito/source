#include <iostream>
#include <string>

int main() {
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

	return 0;
}