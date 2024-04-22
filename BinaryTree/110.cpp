#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};

bool isBalancedTree(TreeNode* root){
    if(root == nullptr) return true;
    
}