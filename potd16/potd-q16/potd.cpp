#include "potd.h"
#include <iostream>

/*
* Insert the new node into the list so the list remains in sorted order. 
* (If the value of the new node is already in the list you can insert it 
* before or after the other node with the same value.)
*/
void insertSorted(Node **head, Node *insert) {

  // your code here!
  // **head: the head of a linked list
  // *insert: the node you will insert into the list, never be NULL
  // To change the address stored in the pointer we need to pass by pointer.

  Node * current;

  // insert in the very front
  if(*head == NULL || (*head)->data_ >= insert->data_){

    insert->next_ = *head;
    *head = insert;

  } else {

    current = *head;
    
    while(current->next_ != NULL && current->next_->data_ < insert->data_){
      current = current->next_;
    }

    insert->next_ = current->next_; // insert after
    current->next_ = insert;

  }

}
