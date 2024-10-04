#include <array>
#include <iostream>
#include <ostream>
#include <vector>

void reverseCopy(const std::array<int, 5>& arr, std::vector<int>& vec) {
	// TODO: implement this function
}

int main() {
	std::vector<int> vec{};
	constexpr std::array<int, 5> arr{1, 2, 3, 4, 5};

	reverseCopy(arr, vec);

	for (const auto i : vec) {
		std::cout << i << std::endl;
	}
}
