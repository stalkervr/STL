//
// Created by stalk on 22.02.2021.
//

#ifndef GLAVA_2_STACK_V_H
#define GLAVA_2_STACK_V_H


class Stack_v
{
public:
    class Underflow{};
    class Overflow{};
    class Bad_pop{};

    virtual void push(char c) = 0;
    virtual char pop() = 0;
};


#endif //GLAVA_2_STACK_V_H
