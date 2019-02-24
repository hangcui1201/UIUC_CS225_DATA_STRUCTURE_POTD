#include "Node.h"

using namespace std;

Node *listSymmetricDifference(Node *first, Node *second) {

    // There is a better solution for sure! Modify the list

    Node *head =  NULL;
    Node *cur_head = NULL;
    Node *cur_head_prev = NULL;

    Node *cur_first = first;
    Node *cur_second = second;

    if(cur_first  == NULL && cur_second == NULL){
        return NULL;
    }

    if(cur_first == NULL){

        while(cur_second != NULL){

            int data = cur_second->data_;

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

            cur_second = cur_second->next_;

        }
        
    }

    if(cur_second == NULL){

        while(cur_first != NULL){

            int data = cur_first->data_;

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

            cur_first = cur_first->next_;

        }
        
    }


    // Next first != NULL and second != NULL
    while(cur_first != NULL){

        int data = cur_first->data_;

        cur_second = second;

        while(cur_second != NULL){

            if(data == cur_second->data_){ // find same data in second list
                break;
            }
            
            cur_second = cur_second->next_;
            
            if(cur_second == NULL){

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

                    if(cur_head == NULL){
                        cur_head_prev->next_ = newNode;
                    }
                    

                }

            }

        }

        cur_first = cur_first->next_;

    }



    cur_head = NULL;
    cur_head_prev = NULL;

    cur_second = second;

    while(cur_second != NULL){

        int data = cur_second->data_;

        cur_first = first;

        while(cur_first != NULL){

            if(data == cur_first->data_){ // find same value in the first list 
                break;
            }
            
            cur_first = cur_first->next_;
            
            if(cur_first == NULL){

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

                    if(cur_head == NULL){
                        cur_head_prev->next_ = newNode;
                    }
                    
                }
                
            }

        }

        cur_second = cur_second->next_;

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
