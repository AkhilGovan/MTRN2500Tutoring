#include <iostream>
#include <stack>
#include <string>
// Implement the following function that
// detects whether a string of parentheses is valid. The function
// should have the following signature:
// str contains only '(', ')', '{', '}'
bool isBalanced(const std::string& str) {
	std::stack<char> stack;

	return false;
}

int main() {
	// sample usage
	std::cout << isBalanced("{()}") << "\n"; // true
	std::cout << isBalanced("()()") << "\n"; // true
	std::cout << isBalanced("(()") << "\n"; // false
	std::cout << isBalanced("({)}") << "\n"; // false
}
