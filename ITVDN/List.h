//
// Created by stalk on 04.03.2021.
//

#ifndef ITVDN_LIST_H
#define ITVDN_LIST_H

struct Node {
    int data;
    Node* next;
};


class List {

    Node* head;
    Node* tail;

public:
    List();
    ~List();

    void AddToHead(int data);
    void AddToTail(int data);
    void DeleteFromHead();
    void Show();

};


#endif //ITVDN_LIST_H
