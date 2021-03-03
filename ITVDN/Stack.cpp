//
// Created by stalk on 03.03.2021.
//

#include "Stack.h"

Stack::Stack(int Size) {
    top = 0;
    size = Size;
    arr = new int (size);
}

Stack::~Stack() {
    delete[] arr;
}

void Stack::Push(int elem)
{
    if(top >= size)
        return;
    arr[top] = elem;
    top++;
}

void Stack::Pop() {
    top--;
}

bool Stack::IsEmpty() {
    return top;
}

int Stack::Top() {
    return arr[top-1];
}
