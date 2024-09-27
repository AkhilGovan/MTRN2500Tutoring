#include <iostream>
#include <vector>
//replace with smart pointers
int main() {
	std::unique_ptr<int> p = std::make_unique<int>(10);
	std::cout << *p << std::endl;

}
