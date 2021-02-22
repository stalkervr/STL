//
// Created by stalk on 22.02.2021.
//

#ifndef GLAVA_2_STACK_H
#define GLAVA_2_STACK_H


class Stack {

    char* v;
    int top;
    int max_size;

public:
    class Underflow{};
    class Overflow{};
    class Bad_size{};

    explicit Stack(int s);
    ~Stack();

    void push(char c);
    char pop();
};


#endif //GLAVA_2_STACK_H
