#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};

int count = 0;

int maxDepth(TreeNode *root){
    if(root == nullptr) return 0;
    // count += 1;
    int a = maxDepth(root->left);
    int b = maxDepth(root->right);
    return 1 + max(a, b);
// 时间复杂度：O(n)，其中 n 是二叉树中的节点个数。每个节点在递归中只被遍历一次。 
}

int main(){
    TreeNode* p1 = new TreeNode(3);
    TreeNode* p2 = new TreeNode(9);
    TreeNode* p3 = new TreeNode(20);
    TreeNode* p4 = new TreeNode(15);
    TreeNode* p5 = new TreeNode(7);

    p1->left = p2;
    p1->right = p3;
    p3->left = p4;
    p3->right = p5;

    int depth = maxDepth(p1);
    cout << "Maximum depth of the binary tree: " << depth << endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
}