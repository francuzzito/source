#include <iostream>
#include <string>

namespace callable_functions {
	// output "hello world!" to the console.
	void hello_world() {
		// generate the message.
		const std::string message = "hello world!";

		// print the message to the console.
		std::cout << message << "\n";
	}
}