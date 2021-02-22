//
// Created by stalk on 22.02.2021.
//

#ifndef GLAVA_2_ARRAY_STACK_H
#define GLAVA_2_ARRAY_STACK_H


#include "Stack_v.h"

class Array_stack : public Stack_v
{
    char * p;
    int max_size;
    int top;

public:
    explicit Array_stack(int s);
    ~Array_stack();
    void push(char c) override;
    char pop() override;
};


#endif //GLAVA_2_ARRAY_STACK_H
