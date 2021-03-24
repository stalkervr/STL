//
// Created by stalkervr on 3/5/21.
//

#include <iostream>
#include "List_2.h"

List_2::List_2() {
    head = nullptr;
    tail = nullptr;
}

List_2::~List_2() {
    Node* tmp = head;
    while (head != nullptr)
    {
        tmp = head;
        head = head->next;
        delete tmp;
    }
}

void List_2::AddToHead(int data) {

    Node* elem = new Node;
    elem->data = data;

    if (head == nullptr)
    {
        head = elem;
        tail = elem;
        elem->next = nullptr;
        elem->prev = nullptr;
    } else
    {
        elem->next = head;
        head->prev = elem;
        head = elem;
        elem->prev = nullptr;
    }

}

void List_2::AddToTail(int data) {
    Node* elem = new Node;
    elem->data = data;

    if (head == nullptr)
    {
        head = elem;
        tail = elem;
        elem->next = nullptr;
        elem->prev = nullptr;
    }
    else
    {
        tail->next = elem;
        elem->prev = tail;
        tail = elem;
        tail->next = nullptr;
    }
}

void List_2::DeleteFromHead() {
    Node* delElem = head;
    head = head->next;
    delete delElem;
    head->prev = nullptr;
}

void List_2::Show() {
    Node* tmp = head;
    while (tmp != nullptr)
    {
        std::cout << tmp->data << std::endl;
        tmp = tmp->next;
    }
}

void List_2::DeleteFromTail() {
    Node* delElem = tail;
    tail = tail->prev;
    delete delElem;
    tail->next = nullptr;

}
