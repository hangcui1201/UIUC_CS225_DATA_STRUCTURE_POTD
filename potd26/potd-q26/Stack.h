#pragma once

#include <cstddef>

struct Node {
    int data_;
    Node* next_;
};



class Stack {

  public:

    Node* head_;
    Node* tail_;
    Stack();
    ~Stack();

    int size() const;
    bool isEmpty() const;
    void push(int value);
    int pop();

  private:
    int stack_size;
};