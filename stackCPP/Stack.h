#ifndef STACK_H
#define STACK_H
//#pragma once

class Stack {
public:
    Stack();
    ~Stack();
    void push(int element);
    int pop();
    bool isEmpty() const;

private:
    int* elements;
    int top;
    int maxElementId;

};

#endif
