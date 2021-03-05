//
// Created by stalkervr on 3/5/21.
//

#ifndef ITVDN_LIST_2_H
#define ITVDN_LIST_2_H

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class List_2 {

    Node* head;
    Node* tail;

public:
    List_2();
    ~List_2();

    void AddToHead(int data);
    void AddToTail(int data);
    void DeleteFromHead();
    void DeleteFromTail();
    void Show();

};


#endif //ITVDN_LIST_2_H
