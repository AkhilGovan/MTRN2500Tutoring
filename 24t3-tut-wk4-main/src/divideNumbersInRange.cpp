#include <iostream>
#include <vector>

int divideNumbersInRange(std::vector<int>& vec, int begin, int end, int divisor) {
	// TODO: refactor the code to throw exceptions

	// Subrange must be within vec's range.
	if (begin < 0 || end >= vec.size()) {
		return -1;
	}

	// Cannot divide by zero.
	if (divisor == 0) {
		return -1;
	}

	while (begin != end) {
		vec[begin] /= divisor;
		begin++;
	}

	return 0;
}

int main() {
	std::vector<int> vec{0, 1, 2};
	const int error{divideNumbersInRange(vec, -1, 3, 0)};
	std::cout << "Caught error: " << error << std::endl;
}
