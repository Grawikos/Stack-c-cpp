#include "ExtStack.h"
#include <iostream>

void empty(Stack &s){
	while(!s.isEmpty()){
		std::cout << s.pop() << " ";
	}
	std::cout << std::endl;
}

int main()
{
	Stack firstS, secondS, thirdS, fourthS;
	for (int i = 1; i <= 10; i++) {
		firstS.push(i);
	}
	for (int i = 1; i <= 1000; i++) {
		secondS.push(i);
	}
	
	firstS = firstS;
	secondS = firstS;
	thirdS = firstS;
	Stack fifthS(secondS);
	fourthS = fifthS;
	
	std::cout << "Popped elements (first): ";
	empty(firstS);
	std::cout << "\nPopped elements (second): ";
	empty(secondS);
	std::cout << "\nPopped elements (3): ";
	empty(thirdS);
	std::cout << "\nPopped elements (4): ";
	empty(fourthS);
	std::cout << "\nPopped elements (5): ";
	empty(fifthS);
	

	return 0;
}
