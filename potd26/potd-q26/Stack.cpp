#include "Stack.h"

Stack::Stack(){
  stack_size = 0;
  this->head_ = NULL;
  this->tail_ = NULL;

}

Stack::~Stack() {
  while(this->head_ != NULL){
    Node *curr = this->head_;
    this->head_ = this->head_->next_;
    delete curr;
  }
  this->tail_ = NULL;
}

// `int size()` - returns the number of elements in the stack (0 if empty)
int Stack::size() const {
  return stack_size;
}

// `bool isEmpty()` - returns if the list has no elements, else false
bool Stack::isEmpty() const {
  return (stack_size == 0);
}

// `void push(int val)` - pushes an item to the stack in O(1) time
void Stack::push(int value) {

  Node* newNode = new Node();
  newNode->data_ = value;

  if(this->head_ == NULL){
    newNode->next_ = NULL;
    this->head_ = this->tail_ = newNode;
  } else {
    newNode->next_ = this->head_;
    this->head_ = newNode;
  }

  stack_size++;

}

// `int pop()` - removes an item off the stack and returns the value in O(1) time
int Stack::pop() {

  int removedData;

  if (this->head_ == NULL) {
    return -1;
  } 

  Node* curr = this->head_;
  removedData = this->head_->data_;
  this->head_ = this->head_->next_;
  if(this->head_ == NULL){
    this->tail_ = NULL;
  }
  delete curr;
  stack_size--;

  return removedData;
}
