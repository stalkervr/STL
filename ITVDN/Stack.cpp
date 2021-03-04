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
    arr = nullptr;
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
    return top <= 0;
}

int Stack::Top() {
    if(top <= 0)
        return 0;
    return arr[top-1];
}
