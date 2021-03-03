//
// Created by stalk on 03.03.2021.
//

#ifndef ITVDN_STACK_H
#define ITVDN_STACK_H


class Stack {

    int top;
    int size;
    int* arr;

public:
    explicit Stack(int Size);
    ~Stack();

    void Push(int elem);
    void Pop();
    int Top();
    bool IsEmpty();

};


#endif //ITVDN_STACK_H
