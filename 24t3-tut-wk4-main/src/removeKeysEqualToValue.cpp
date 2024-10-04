#include <iostream>
#include <map>
#include <ostream>

void removeKeysEqualToValue(std::map<int, int>& m) {
	// TODO: implement this function
}

int main() {
	std::map<int, int> m{};
	m.insert(std::pair<int, int>{1, 1});
	m.insert(std::pair<int, int>{2, 6});
	m.insert(std::pair<int, int>{3, 3});
	m.insert(std::pair<int, int>{5, 7});

	removeKeysEqualToValue(m);

	for (const auto & it : m) {
		std::cout << it.first << " " << it.second << std::endl;
	}

	return 0;
}
