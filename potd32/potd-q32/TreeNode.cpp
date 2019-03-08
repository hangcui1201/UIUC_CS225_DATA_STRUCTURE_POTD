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


TreeNode* findLastUnbalanced(TreeNode* root) {
  // your code here
  if ((root == NULL) || (root->left_ == NULL && root->right_== NULL)) {
    return NULL;
  }

  if (findLastUnbalanced(root->left_) == NULL && findLastUnbalanced(root->right_) == NULL) { 
    if (isHeightBalanced(root) == false) {
      return root;
    } else {
      return NULL;
    }
  }
  
  if (findLastUnbalanced(root->left_) != NULL && findLastUnbalanced(root->right_)== NULL) {
    return findLastUnbalanced(root->left_);
  } 
  
  if (findLastUnbalanced(root->left_) == NULL && findLastUnbalanced(root->right_)!= NULL) {
    return findLastUnbalanced(root->right_);
  } 
  
  if (getTreeHeight(findLastUnbalanced(root->left_)) >  getTreeHeight(findLastUnbalanced(root->right_))) {
    return findLastUnbalanced(root->right_);
  } else {
    return findLastUnbalanced(root->left_);
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

