//
// Created by stalk on 22.02.2021.
//

#include "Stack.h"

Stack::~Stack() {
    delete[] v;
}

Stack::Stack(int s) {
    top = 0;
    if (s<0 || 10000<s) throw Bad_size();
    max_size=s;
    v=new char [s];
}

void Stack::push(char c) {
    if (top == max_size) throw Overflow();
    v[top] = c;
    top = top + 1;
}

char Stack::pop() {

    if (top == 0) throw Underflow();
    top = top - 1;

    return v[top];
}
