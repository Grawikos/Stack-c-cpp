#include "Stack.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 2

void init(Stack* s)
{
	s->top = -1;
	s->elements = malloc(INITIAL_CAPACITY * sizeof(int));
	if (NULL == s->elements) {
		printf("Memery allocation error");
		abort();
	}
	s->maxElementId = INITIAL_CAPACITY - 1;
}

void destroy(Stack* s)
{
	free(s->elements);
	s->top = -1;
}

void push(Stack* s, int newElement)
{
	int* tmp;
	if (s->maxElementId <= s->top + 1) {
		tmp = realloc(s->elements, (2 * s->maxElementId + 1) * sizeof(int));
		if (tmp == NULL) {
			printf("Memory allocation error");
			free(s->elements);
			abort();
		}
		s->elements = tmp;
		s->maxElementId = 2 * s->maxElementId + 1;
	}
	s->top += 1;
	s->elements[s->top] = newElement;
}

bool isEmpty(const Stack* s)
{
	return s->top == -1;
}

int pop(Stack* s)
{
	if (isEmpty((const Stack*)s)) {
		printf("No elements to pop");
		return 0;
	}
	s->top--;
	return s->elements[s->top + 1];
}

void startSpeach()
{
	printf("\nPerform operations on the stack:");
	printf("\n1 - Init\n2 - Push\n3 - Pop\n4 - Is empty\n5 - Destroy\n6 - "
		   "Exit");
	printf("\n\nEnter the choice: ");
}
/*
int main()
{
	int choice, work = 1, new;
	Stack s;
	while (work) {
		startSpeach();
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			init(&s);
			break;
		case 2:
			printf("New Element to be pushed:\n>");
			scanf("%d", &new);
			push(&s, new);
			break;
		case 3:
			printf("%d", pop(&s));
			break;
		case 4:
			if (isEmpty(&s))
				printf("True\n\n");
			else
				printf("False\n\n");
			break;
		case 5:
			destroy(&s);
			break;
		case 6:
			work = 0;
			break;
		default:
			printf("\nInvalid choice\nTry again\n>");
		}
	}
}*/
