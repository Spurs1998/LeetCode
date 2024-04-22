#include <iostream>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        
        return isMirror(root->left, root->right);
    }
    
    bool isMirror(TreeNode* leftNode, TreeNode* rightNode) {
        if (leftNode == NULL && rightNode == NULL) {
            return true;
        }
        if (leftNode == NULL || rightNode == NULL) {
            return false;
        }
        
        return (leftNode->val == rightNode->val) &&
               isMirror(leftNode->left, rightNode->right) &&
               isMirror(leftNode->right, rightNode->left);
    }  // 时间复杂度：O(n) 空间复杂度：O(n)
};

// Test the solution
int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    
    // Create an instance of the solution
    Solution solution;
    
    // Call the function and print the result
    bool result = solution.isSymmetric(root);
    cout << "The tree is symmetric: " << (result ? "true" : "false") << endl;
    
    // Clean up the memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;
    
    return 0;
}