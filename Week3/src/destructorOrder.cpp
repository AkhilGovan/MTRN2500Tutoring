#include <iostream>

class A {
 public:
	A(int a)
	: mA{new int (a)} {   //add something to the destructor
		std::cout << "A constructor: " << *mA << std::endl;
	}

	~A() {
		std::cout << "A destructor: " << *mA << std::endl;
		delete mA;
	}

 private:
	int *mA;
};

//whats the output
int main() {
	A a{1};
	{
		A b{2};
	}
	A c{3};
}
