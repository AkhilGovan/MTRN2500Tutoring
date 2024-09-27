#include <iostream>

class IntList {
 public:
	IntList(std::size_t size)
	: mData{new int[size]}
	, mSize{size} {}

	// TODO: Implement the destructor

 private:
	int* mData;
	std::size_t mSize;
};

int main() {
	IntList list(5);

	return 0;
}