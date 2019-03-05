#include "Queue.h"

Queue::Queue() { 
  queue_size = 0;
  this->head_ = NULL;
  this->tail_ = NULL;
}

Queue::~Queue() {
  while(this->head_ != NULL){
    Node *curr = this->head_;
    this->head_ = this->head_->next_;
    delete curr;
  }
  this->tail_ = NULL;
}

// `int size()` - returns the number of elements in the queue (0 if empty)
int Queue::size() const {
  return queue_size;
}

// `bool isEmpty()` - returns if the list has no elements, else false
bool Queue::isEmpty() const {
  return (queue_size == 0);
}

// `void enqueue(int val)` - enqueue an item to the queue in O(1) time
void Queue::enqueue(int value) {

  Node* newNode = new Node();
  newNode->data_ = value;
  newNode->next_ = NULL;

  if(this->head_ == NULL){
    this->head_ = this->tail_ = newNode;
  } else {
    this->tail_->next_ = newNode;
    this->tail_ = newNode;
  }

  queue_size++;
}

// `int dequeue()` - removes an item off the queue and returns the value in O(1) time
int Queue::dequeue() {

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
  queue_size--;

  return removedData;
}
