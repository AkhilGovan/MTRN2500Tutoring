#include <unordered_set>
#include <iostream>
#include <map>
#include <string>
#include <vector>

std::vector<std::string> nOccurrences(const std::vector<std::string>& v, int n) {
	std::map<std::string, int> strings{};
	for (const auto i: v) {
		strings[i]++;
	}

	std::vector<std::string> res{};

	for (const auto i : strings) {
		if ( i.second == n ) {
			res.push_back(i.first);
		}
	}
	return res;
}

int main() {
	const std::vector<std::string> vec = {"red", "blue", "red", "green", "red", "green", "purple"};

	const std::vector<std::string> occurOnce{nOccurrences(vec, 1)};
	for (const auto& occurrence : occurOnce) {
		std::cout << occurrence << std::endl;
	}
}
