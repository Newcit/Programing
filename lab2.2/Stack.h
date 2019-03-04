#ifndef LAB2_2_STACK_H
#define LAB2_2_STACK_H

#include <iostream>
#include <limits>

class Stack {
private:
    int *stack = new int[100];
    int start = -1;

public:

    ~Stack() {
        delete[] stack;
    }

    void getStack();

    void operator<<(const int &number);

    void operator>>(int &number );
};

void Stack::operator<<(const int &number) {
    ++start;
    stack[start] = number;
}


void Stack::operator>>(int &number ){
    if (start != 0) {
        number = stack[start];
        --start;
    } else {
        std::cout << "Size of stack is 0";
    }
}

void Stack::getStack() {
    for (int i = start; i >= 0; --i) {
        std::cout << stack[i] << ' ';
    }
    std::cout << '\n';
}



#endif //LAB2_2_STACK_H
