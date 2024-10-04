#include <iostream>
#include <vector>

void removeNegative(std::vector<int>& nums) {
	// TODO: implement this function
}

int main() {
	std::vector<int> nums{1, -3, 4, -5, -6, 0};
	removeNegative(nums);

	for (const int num : nums) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
}
