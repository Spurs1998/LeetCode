// 迭代法遍历二叉树
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<int>& preorder(TreeNode* root, vector<int>& nums){
    stack<int> st;
    if(root == nullptr) return;

}