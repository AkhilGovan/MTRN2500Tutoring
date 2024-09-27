#include <iostream>

// given a pointer to an int, add 5 to the value
// TODO: refactor to use references
void addFive(int& x) {
	x += 5;
}


int main() {
	int value = 5;

	addFive(value);
	std::cout << value << std::endl;

	return 0;
}
