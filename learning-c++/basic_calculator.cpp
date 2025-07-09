#include <iostream>

int main() {
	// predefined variables.
	double num1, num2, result; // use double for better precision.
	char opp;

	// prompt user for input.
	std::cout << "enter first number: ";
	std::cin >> num1;

	// operator input.
	std::cout << "enter operator: ";
	std::cin >> opp;

	// second number input.
	std::cout << "enter second number: ";
	std::cin >> num2;

	// perform operation based on operator input.
	if (opp == '+') {
		result = num1 + num2;
	}
	else if (opp == '-') {
		result = num1 - num2;
	}
	else if (opp == '*') {
		result = num1 * num2;
	}
	else if (opp == '/') {
		if (num2 != 0) {
			result = num1 / num2;
		}
		else {
			std::cout << "error: division by zero\n";
			return 1; // exit with error code if division by zero.
		}
	}
	else {
		std::cout << "invalid operator\n";
		return 1; // exit with error code if operator is invalid.
	}
	std::cout << "result: " << result << "\n";

	return 0;
}