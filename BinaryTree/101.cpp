#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
}

bool isSymmetric(TreeNode* root) {
    if(root == nullptr) {
        return true;
    }
}