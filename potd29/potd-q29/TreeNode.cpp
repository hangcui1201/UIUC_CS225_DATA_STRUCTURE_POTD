#include "TreeNode.h"
#include <iostream>

TreeNode * deleteNode(TreeNode* root, int key) {

  if (root == NULL) {
    return root;
  }
  
  if (root->val_ > key) {

    // Go to left tree
    root->left_ = deleteNode(root->left_, key);

  } else if (root->val_ < key) {

    // Go to right tree
    root->right_ = deleteNode(root->right_, key);

  } else {

    // Find the key
    TreeNode* curr = root;

    // Delete leaf node
    if (root->left_ == NULL && root->right_ == NULL) {
      delete root;
      root = NULL;
    // Delete node with one right child
    } else if (root->left_ == NULL && root->right_ != NULL) {
      root = root->right_;
      delete curr;
      curr = NULL;
    // Delete node with one left child
    } else if (root->left_ != NULL && root->right_ == NULL) {
      root = root->left_;
      delete curr;
      curr = NULL;
    // Delete node with two children
    } else {

      TreeNode* right = root->right_;

      // Find the smallest value in left subtree to replace the current root
      while (right->left_ != NULL) {
        right = right->left_;
      }

      root->val_ = right->val_;
      root->right_ = deleteNode(root->right_, right->val_);
    }
  }

  return root;

}

void inorderPrint(TreeNode* node)
{
    if (!node)  return;
    inorderPrint(node->left_);
    std::cout << node->val_ << " ";
    inorderPrint(node->right_);
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
