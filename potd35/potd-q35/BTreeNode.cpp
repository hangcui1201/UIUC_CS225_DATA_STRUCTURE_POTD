#include <vector>
#include "BTreeNode.h"


BTreeNode* find(BTreeNode* root, int key) {

    unsigned long i = 0;

    while (i < root->elements_.size() && key > root->elements_[i]) {
      i++;
    }

    if(root->is_leaf_){
      return NULL;
    } else if (root->elements_[i]==key){
      return root;
    } else {
      return find(root->children_[i], key);
    }

}
