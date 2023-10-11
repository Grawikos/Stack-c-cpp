#include <iostream>
#include "Stack.h"

int main() {
    Stack stack;

    for (int i = 1; i <= 10; i++) {
        stack.push(i);
    }

    std::cout << "Popped elements: ";
    while (!stack.isEmpty()) {
        std::cout << stack.pop() << " ";
    }
    std::cout << std::endl;

    return 0;
}
