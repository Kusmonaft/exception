#pragma once
#include"Node.h"

class List {
private:
    Node* head;
    Node* tail;

public:
    List() : head(nullptr), tail(nullptr) {}

   // void insert(int val) {}
    void insert(int val) {
        Node* newNode = new Node(val);
        if (newNode == nullptr) {
            throw std::runtime_error("Memory allocation failed");
        }

        if (head == nullptr) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void remove() {
        if (head == nullptr) {
            throw std::out_of_range("List is empty, cannot remove");
        }

        Node* temp = tail;
        if (head == tail) {
            head = tail = nullptr;
        }
        else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
    }
};

