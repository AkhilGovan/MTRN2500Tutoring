#include <iostream>

int& createRef(int val) {
	int& ref{val}; // Create a reference to val here.
	return ref; // Return the reference.
}

int main() {
	int& ref{createRef(42)};
	std::cout << ref << std::endl;
}
