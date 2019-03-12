#include "TreeNode.h"

TreeNode::RotationType balanceTree(TreeNode*& subroot) {

  if (leftHeavy(subroot) == true) {

    if (leftHeavy(subroot->left_) == true) {
      return TreeNode::right;
    } else {
      return TreeNode::leftRight;
    }

  }
  
  if (rightHeavy(subroot) == true) {

    if (rightHeavy(subroot->right_) == true) {
      return TreeNode::left;
    } else {
      return TreeNode::rightLeft;
    }

  }


}
