#include <iostream>
#include <queue>

// Use std::queue to simulate a char buffer.
// Each key press should input the char key into the buffer.
// Pressing the “enter” key should pop the queue.
int main() {
	std::queue<char> buffer{};
	char key;

	while(std::cin.get(key)) {
		if (key=='\n') {
			if(!buffer.empty()) {
				std::cout << buffer.front() << std::endl;
				buffer.pop();
			}
		}else {
			buffer.push(key);
		}
	}
}