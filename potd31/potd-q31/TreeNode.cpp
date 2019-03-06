#include "TreeNode.h"
#include <cmath>
#include <algorithm> 

int getTreeHeight(TreeNode* root){
  if(root == NULL){
    return -1;
  } else {
    return (1 + std::max(getTreeHeight(root->left_), getTreeHeight(root->right_)));
  }
}


bool isHeightBalanced(TreeNode* root) {
  // your code here
  int left_tree_height = getTreeHeight(root->left_);
  int right_tree_height = getTreeHeight(root->right_);
  if (abs(right_tree_height-left_tree_height) <= 1){
    return true;
  } else {
    return false;
  }
}



void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}

