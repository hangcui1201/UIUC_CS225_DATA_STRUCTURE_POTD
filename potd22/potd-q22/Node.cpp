#include "Node.h"

using namespace std;

Node *listIntersection(Node *first, Node *second) {
  // your code here

  // Idea: for every node in the first linked list, compare it with
  // all the node in the second linked list

//   Node *newNode = new Node;

  Node *head =  NULL;
  Node *cur_head = NULL;
  Node *cur_head_prev = NULL;

  Node *cur_first = first;
  Node *cur_second = second;

  while(cur_first != NULL){

      int data = cur_first->data_;

      cur_second = second;
      while(cur_second != NULL){

          if(data == cur_second->data_){ // find intersection value 

            Node *newNode = new Node;
            newNode->data_ = data;
            newNode->next_ = NULL;

            if(head == NULL){
                head = newNode;
            } else {

                cur_head = head;

                while(cur_head != NULL){
                    if(cur_head->data_ == data){
                        delete newNode;
                        break;
                    }
                    cur_head_prev = cur_head;
                    cur_head = cur_head->next_;
                }
                cur_head_prev->next_ = newNode;
            }

            break;

          } else {

              cur_second = cur_second->next_;
          }

          
      }

      cur_first = cur_first->next_;

  }

  return head;
}

Node::Node() {
    numNodes++;
}

Node::Node(Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
