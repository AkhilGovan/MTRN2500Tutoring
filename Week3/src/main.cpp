#include <iostream>

#include "Enrolments.hpp"
#include "Vector2D.hpp"

int main() {
	//default constructor
	Vector2D vec1{};
	std::cout << vec1 << std::endl;

	// second constructor
	Vector2D vec2{2,3};
	std::cout << vec2 << std::endl;

	// 3rd constructor
	std::vector<double> a{2.78, 9.99};
	Vector2D vec3{a};
	std::cout << vec3 << std::endl;
	//
	// copy constructor
	Vector2D vec4{vec2};
	std::cout << vec4<< std::endl;

	// move constructor
	Vector2D vec5{std::move(vec3)};
	std::cout << vec5<< std::endl;
	std::cout << vec3<< std::endl;

	// copy assignment
	Vector2D vec6 = vec3;
	std::cout << vec6 << std::endl;

	// move assignment
	Vector2D vec8{51.2, 43.1};
	Vector2D vec7 = std::move(vec8);
	std::cout << vec7 << std::endl;

	// overload type conversion
	Vector2D vec10(3.0, 4.0);
	std::vector<double> stdVector = vec10;
	std::cout << "Converted vector: (" << stdVector[0] << ", " << stdVector[1] << ")" << std::endl;

	Vector2D vec11{2.3, 3.1};
	std::cout << vec11 * 10 << std::endl;
	return 0;

}
