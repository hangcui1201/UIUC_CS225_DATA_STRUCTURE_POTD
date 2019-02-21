#include "Node.h"

/** Create a new node and add it to the list, while keeping the list sorted.
*/
Node *insertSorted(Node *out, int data) {

    Node *newNode = new Node;
    Node *current = out;
    Node *prev;

    newNode->data_ = data; 
    newNode->next_ = NULL;

    // out params is out
    if(out == NULL){

        out = newNode;

    } else {

        if(data < out->data_){ // less than the first node
            newNode->next_ = out;
            out = newNode;
            return out;
        }

        if(data == out->data_){
            delete newNode;
            return out;
        }

        while(current->next_ != NULL && current->data_ < data){
            prev = current;
            current = current->next_;
        }

        if(current->next_ == NULL){

            if(data == current->data_){
                delete newNode;
                return out;
            }

            if(data > current->data_){
                current->next_ = newNode;
            }
            if(data < current->data_){
                newNode->next_ = prev->next_;
                prev->next_ = newNode;
            }
        } else { // current->next_ != NULL but current->data_ >= data

            if(current->data_ == data){
                delete newNode;
                return out;
                
            } else{
                newNode->next_ = current->next_;
                current->next_ = newNode;   
            }

        }
        
    }

    return out;
}

/** Creates a new list (containing new nodes, allocated on the heap)
	that contains the set union of the values in both lists.
*/
Node *listUnion(Node *first, Node *second) {

    Node *out = NULL;

    while (first != NULL) { // first points to some data

        // your code here
        // hint: call insertSorted and update first 
        out = insertSorted(out, first->data_);
        first = first->next_;
    }

    while (second != NULL) {
        // your code here
        out = insertSorted(out, second->data_);
        second = second->next_;
    }

    return out;

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
