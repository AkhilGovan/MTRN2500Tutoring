#include <iostream>

#include <ostream>
#include <string>
#include <vector>

std::vector<std::string> toUppercase(const std::vector<std::string>& strings) {
	// TODO: implement this function
	return {};
}

int main() {
	const std::vector<std::string> strings = {
		"Hello,",
		"my",
		"name",
		"is",
		"!!!"
	};

	const std::vector<std::string> uppercaseStrings{toUppercase(strings)};
	for (const auto& string : uppercaseStrings) {
		std::cout << string << std::endl;
	}
}
