#include "wrapper.h"

namespace wrappers {
    int get_valid_int(const std::string& prompt) {
        int value;
        while (true) {
            std::cout << prompt;
            std::cin >> value;

            if (!std::cin.fail()) {
                return value; // valid input, return it
            }

            std::cout << "invalid input. Please enter a valid integer.\n";
            std::cin.clear(); // clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard bad input
        }
    }
}