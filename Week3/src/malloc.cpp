#include <iostream>

#include <stdlib.h>

int main(void) {
	int* p = (int*)malloc(sizeof(int)); // allocate memory for an integer
	*p = 10; // assign a value to the integer
	std::cout << *p << std::endl; // print the value
	free(p); // deallocate the memory
}
