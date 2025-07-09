#include <algorithm>
#include <iostream>

namespace callable_functions {
	// ask the user for a word and check if it reads the same backward.
	void palindrome_checker() {
		// predeclare variables.
		std::string word;
		std::cout << "enter a word: ";
		std::cin >> word;

		if (std::cin.fail()) {
			std::cout << "invalid input. please enter a valid word." << std::endl;
			std::cin.clear(); // clear the error state
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input.
			return;
		}

		// check if the input is empty.
		if (word.empty()) {
			std::cout << "You entered an empty string." << std::endl;
			return;
		}

		// convert to lowercase for case-insensitive comparison.
		std::string lower_word = word;
		std::transform(lower_word.begin(), lower_word.end(), lower_word.begin(), ::tolower);

		// check if the word is a palindrome.
		bool is_palindrome = true;
		for (size_t i = 0; i < lower_word.size() / 2; ++i) {
			if (lower_word[i] != lower_word[lower_word.size() - 1 - i]) {
				is_palindrome = false;
				break;
			}
		}
		if (is_palindrome) {
			std::cout << word << " is a palindrome." << std::endl;
		} else {
			std::cout << word << " is not a palindrome." << std::endl;
		}
	}
}
