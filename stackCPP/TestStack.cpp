#include <iostream>
#include "Stack.h"

int main() {
    Stack firstS, secondS, thirdS;

    for (int i = 1; i <= 10; i++) {
        secondS.push(i);
    }
    for (int i = 1; i <= 100; i++) {
        firstS.push(i);
    }

    std::cout << "Popped elements (first): ";
    while (!firstS.isEmpty()) {
        std::cout << firstS.pop() << " ";
    }
    std::cout << "\nPopped elements (second): ";
    while (!secondS.isEmpty()) {
        std::cout << secondS.pop() << " ";
    }
    std::cout << "\nPopped elements (third): ";
    while (!thirdS.isEmpty()) {
        std::cout << thirdS.pop() << " ";
    }
    
    
    std::cout << std::endl;

    return 0;
}
