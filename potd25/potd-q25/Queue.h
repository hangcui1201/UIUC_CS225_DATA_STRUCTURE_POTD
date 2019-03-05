#pragma once

#include <cstddef>

struct Node {
    int data_;
    Node* next_;
};

class Queue {

    public:

        Node* head_;
        Node* tail_;
        Queue();
        ~Queue();

        int size() const;
        bool isEmpty() const;
        void enqueue(int value);
        int dequeue();
    
    private:
        int queue_size;

        
};

