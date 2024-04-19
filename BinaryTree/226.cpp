#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to invert a binary tree
TreeNode* invertTree(TreeNode* root) {
    if (root == nullptr) {
        return nullptr;
    }
    
    // Swap the left and right child nodes
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    
    // Recursively invert the left and right subtrees
    invertTree(root->left);
    invertTree(root->right);
    
    return root;
}

// Function to print the binary tree in inorder traversal
void printInorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    std::cout << root->val << " ";
    printInorder(root->left); 
    printInorder(root->right);
}

int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);
    
    // Print the original binary tree
    std::cout << "Original binary tree: ";
    printInorder(root);
    std::cout << std::endl;
    
    // Invert the binary tree
    TreeNode* invertedRoot = invertTree(root);
    
    // Print the inverted binary tree
    std::cout << "Inverted binary tree: ";
    printInorder(invertedRoot);
    std::cout << std::endl;
    
    return 0;
}