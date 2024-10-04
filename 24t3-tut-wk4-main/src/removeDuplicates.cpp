#include <unordered_set>
#include <iostream>
#include <vector>

std::vector<int> removeDuplicates(const std::vector<int>& vec) {
	std::unordered_set<int> seen{};
	std::vector<int> res;

	for (int i : vec) {
		if (seen.find(i) == seen.end()) {
			res.push_back(i);
			seen.insert(i);
		}
	}
	return res;
}

int main() {
	const std::vector<int> vec = {1, 5, 1, 2, 1, 2, 3};

	const std::vector<int> dupRemoved{removeDuplicates(vec)};
	for (const auto i : dupRemoved) {
		std::cout << i << std::endl;
	}
}
