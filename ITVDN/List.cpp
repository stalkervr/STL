//
// Created by stalk on 04.03.2021.
//

#include "List.h"
#include <iostream>

List::List() {
    head = nullptr;
    tail = nullptr;
}

List::~List() {
    Node* tmp = head;
    while (head != nullptr)
    {
        tmp = head;
        head = head->next;
        delete tmp;
    }
}

void List::AddToHead(int data) {

    Node* elem = new Node;
    elem->data = data;

    if (head == nullptr)
    {
        head = elem;
        tail = elem;
        elem->next = nullptr;
    } else
    {
        elem->next = head;
        head = elem;
    }
}

void List::AddToTail(int data) {

    Node* elem = new Node;
    elem->data = data;

    if (head == nullptr)
    {
        head = elem;
        tail = elem;
        elem->next = nullptr;
    }
    else
    {
        tail->next = elem;
        tail = elem;
        tail->next = nullptr;
    }
}

void List::DeleteFromHead() {
    Node* delElem = head;
    head = head->next;
    delete delElem;
}

void List::Show() {
    Node* tmp = head;
    while (tmp != nullptr)
    {
        std::cout << tmp->data << std::endl;
        tmp = tmp->next;
    }
}


