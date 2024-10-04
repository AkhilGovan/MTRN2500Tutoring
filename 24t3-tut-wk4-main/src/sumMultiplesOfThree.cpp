#include <iostream>
#include <vector>

// Complete the following function which, given a
// vector of integers, returns the sum of all elements that are
// multiples of 3
int sumMultiplesOfThree(const std::vector<int>& nums) {
	int sum{0};
	std::for_each(nums.begin() + 2, nums.end() -1, [&sum](int const &i) {
		if (i % 3 == 0) {
			sum += i;
		}
	});
	return sum;
}

int main() {
	const std::vector<int> nums{2, 3, 5, 9, -1, -6};
	std::cout << sumMultiplesOfThree(nums) << std::endl;
}
