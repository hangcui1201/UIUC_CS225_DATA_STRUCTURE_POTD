#include "Node.h"

void mergeList(Node *first, Node *second) {
  // your code here!

  Node *first_cur = first;
  Node *second_cur = second;
  Node *first_next;
  Node *second_next;

  while(first_cur != NULL && second_cur != NULL){

    first_next = first_cur->next_;
    second_next = second_cur->next_;

    // Deal with if second list is longer than first list
    if(first_next != NULL){
        second_cur->next_ = first_next;
    }
    
    first_cur->next_ = second_cur;

    first_cur = first_next;
    second_cur = second_next;

  }

}

Node::Node() {
    numNodes++;
}

Node::Node(const Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
