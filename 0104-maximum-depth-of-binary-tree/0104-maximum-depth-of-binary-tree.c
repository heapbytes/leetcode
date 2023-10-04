/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int a, int b){
  return (a > b) ? a : b;  
}

int maxDepth(struct TreeNode* root){
     
  int r = 0, l = 0;
  if(root==NULL){
    return 0;
  }else{
    l = maxDepth(root->left);
    r = maxDepth(root->right);
  }
  
  return max(l, r) +1;

}