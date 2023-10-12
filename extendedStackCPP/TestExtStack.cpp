#include "ExtStack.h"
#include <iostream>

int main()
{
	Stack firstS;

	for (int i = 1; i <= 10; i++) {
		firstS.push(i);
	}
	
	Stack secondS(firstS);

	std::cout << "Popped elements (first): ";
	while (!firstS.isEmpty()) {
		std::cout << firstS.pop() << " ";
	}
	std::cout << "\nPopped elements (second): ";
	while (!secondS.isEmpty()) {
		std::cout << secondS.pop() << " ";
	}

	std::cout << std::endl;

	return 0;
}
