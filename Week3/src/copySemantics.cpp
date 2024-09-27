#include <iostream>
#include <string>

int main() {
	std::string s1{"Hello"};
	std::string s2{s1};
	std::string s3 = s1;

	s1.append(" World");

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << s3 << std::endl;
}
