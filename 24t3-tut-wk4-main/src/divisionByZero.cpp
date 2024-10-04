#include <iostream>
#include <stdexcept>

// TODO: create a new exception class to handle division_by_zero cases

double division(double numerator, double denominator) {
	if (denominator == 0) {
		// TODO: replace this to throw your new division by zero exception class
		throw std::logic_error("cannot divide by zero");
	}
	return numerator / denominator;
}

int main() {
	try {
		std::cout << division(53, 0) << std::endl;
	} catch(std::exception const& e) {
		std::cout << e.what() << std::endl;
	}
}
