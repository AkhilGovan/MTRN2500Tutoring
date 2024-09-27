#include <iostream>

int main() {
	int x = 10;

	// declare a pointer to an integer called p
	int* p;
	// assign the address of x to p
	p = &x;
	// print the value of x using p
	std::cout << *p << std::endl;
	// print the address of x using p
	std::cout << &x << std::endl;
}

