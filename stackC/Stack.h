#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#include <stdio.h>

typedef struct {
	int top;
	int* elements;
	int maxElementId;
} Stack;

void init(Stack* s);
void destroy(Stack* s);
void push(Stack* s, int element);
int pop(Stack* s);
bool isEmpty(const Stack* s);

#endif
