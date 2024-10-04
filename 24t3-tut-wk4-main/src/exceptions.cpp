#include <iostream>
#include <vector>

int main() {
	try {
		int i{};
		std::cin >> i;
		const std::vector<int> vec{10, 11, 12, 13, 14};
		std::cout << vec.at(i);
	} catch (std::out_of_range const& e) {
		std::cout << "Caught something:" << e.what() << std::endl;
	}
	catch (std::__narrow_to_ const& e) {
		std::cout << "Caught something:" << e.what() << std::endl;
	}

}
