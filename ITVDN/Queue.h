//
// Created by stalk on 04.03.2021.
//

#ifndef ITVDN_QUEUE_H
#define ITVDN_QUEUE_H


class Queue {

    int size;
    int front;
    int back;
    int* arr_q;

public:
    Queue();
    ~Queue();

    void Push(int elem);
    void Pop();
    int Front();
    int Back();
    bool IsEmpty();
};


#endif //ITVDN_QUEUE_H
