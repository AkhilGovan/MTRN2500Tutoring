#include <iostream>

struct Simple {
	Simple() {
		std::cout << "constructed" << std::endl;
	}
	int x = 0;
};

void printX(Simple s) {
	std::cout << s.x << std::endl;
}

int main() {
	Simple s;
	printX(s);
}
