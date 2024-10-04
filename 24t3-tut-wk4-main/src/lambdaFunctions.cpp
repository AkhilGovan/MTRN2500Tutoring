#include <iostream>
#include <vector>

// Convert each of these functions
// into lambda functions.

// int var1{5};
// int foo(int arg1) { return arg1 * 2; }
// void bar(int arg1, int arg2) { return arg1 + arg2; }
// float baz(float arg1, float arg2) { return var1 * arg1 + arg2; }

int main() {
	int var1{5};
	auto fooLambda = [] (int arg1) {return arg1*2;};
	auto bazLambda = [&var1] (float arg1, float arg2) {
		var1 = 2;
		return var1 * arg1 + arg2;
	};

	std::cout << fooLambda(3) << std::endl;
	std::cout << var1 << std::endl;

	std::cout << bazLambda(2,3);
	std::cout << var1 << std::endl;

}
