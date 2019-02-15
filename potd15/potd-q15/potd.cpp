#include "potd.h"
#include <iostream>

using namespace std;

string stringList(Node *head) {

    // your code here!
    if(head == NULL){
        return "Empty list";
    }

    string result;
    int count = 0;

    while(head!=NULL){

        result += "Node " + to_string(count)+ ": " + to_string(head->data_);
        head = head->next_;
        if(head != NULL){
            result += " -> ";
            count += 1;
        }
    }
    return result;

}
