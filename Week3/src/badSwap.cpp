#include <iostream>

//whats wrong here??

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int x = 10;
	int y = 20;

	swap(&x, &y);

	// I'm expecting x to be 20 and y to be 10
	std::cout << "x: " << x << ", y: " << y << std::endl;
}
