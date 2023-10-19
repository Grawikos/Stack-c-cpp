//#ifndef STACK_H
//#define STACK_H
#pragma once

class Stack {
public:
    Stack();
    ~Stack();
    Stack(Stack &s);
    Stack& operator= (const Stack &s);
    void push(int element);
    int pop();
    bool isEmpty() const;

private:
    int* elements;
    int top;
    int maxElementId;

};

//#endif
