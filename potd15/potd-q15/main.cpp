#include "potd.h"
#include <iostream>
using namespace std;

int main() {

  // Test 1: An empty list
  Node * head = NULL;
  cout << stringList(head) << endl;

  // Test 2: A list with exactly one node
  Node *head_1;
  Node node_1;
  node_1.data_ = 100;
  node_1.next_ = NULL;
  head_1 = &node_1;
  // cout << head_1->data_ << endl;
  cout << stringList(head_1) << endl;


  // Test 3: A list with more than one node
  Node *head_11;
  Node node_11;
  Node node_21;
  node_11.data_ = 100;
  node_21.data_ = 200;
  node_11.next_ = &node_21;
  node_21.next_ = NULL;
  head_11 = &node_11;
  cout << stringList(head_11) << endl;

  return 0;
}
