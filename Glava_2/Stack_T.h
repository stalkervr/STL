//
// Created by stalk on 22.02.2021.
//

#ifndef GLAVA_2_STACK_T_H
#define GLAVA_2_STACK_T_H


template<class T> class Stack_T
{
    // class fields
    T* v;
    int max_size;
    int top;

public:
    // class exception
    class Underflow{};
    class Overflow{};
    // constructor
    explicit Stack_T(int s);
    ~Stack_T();
    // methods
    void push(T);
    T pop();
};

template<class T>
void Stack_T<T>::push(T c) {
    if (top == max_size) throw Overflow();
    v[top] = c;
    top = top + 1;
}

template<class T>
T Stack_T<T>::pop() {
    if (top == 0) throw Underflow();
    top = top - 1;
    return v[top];
}

template<class T>
Stack_T<T>::Stack_T(int s) {
    top = 0;
    max_size = s;
}

template<class T>
Stack_T<T>::~Stack_T() {
    delete [] v;
}


#endif //GLAVA_2_STACK_T_H
