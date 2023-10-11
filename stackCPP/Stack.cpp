#include "Stack.h"
#include <cstdlib>
#include <iostream>
#include <stdlib.h>

#define INITIAL_CAPACITY 2

using namespace std;

Stack::Stack()
{
	maxElementId = INITIAL_CAPACITY - 1;
	top = -1;
	elements = (int*)malloc(INITIAL_CAPACITY * sizeof(int));
	if (NULL == elements) {
		cout << "Memory allocation error\n";
		abort();
	}
}

Stack::~Stack()
{
	free(elements);
}

void Stack::push(int element)
{
	if (top + 1 == maxElementId) {
		int* tmp =
			(int*)realloc(elements, (2 * maxElementId + 1) * sizeof(int));
		if (tmp == NULL) {
			printf("Memory allocation error");
			free(elements);
			abort();
		}
		elements = tmp;
		maxElementId = 2 * maxElementId + 1;
	}
	top++;
	elements[top] = element;
}

int Stack::pop()
{
	if (isEmpty()) {
		cout << "Error: Stack is empty." << endl;
		abort();
	}
	top--;
	return elements[top + 1];
}

bool Stack::isEmpty() const
{
	return top == -1;
}
