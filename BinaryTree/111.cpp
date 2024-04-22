#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};

int minDepth(TreeNode *node){
    if (node == nullptr) return 0;
    int a = minDepth(node->left);
    int b = minDepth(node->right);

    if(node->left == nullptr || node->right == nullptr)
        return 1 + a + b;
    return 1 + min(a, b);
}

int main(){
    TreeNode *p1 = new TreeNode(2);
    TreeNode *P2 = new TreeNode(3);
    TreeNode *P3 = new TreeNode(4);
    TreeNode *P4 = new TreeNode(5);
    TreeNode *P5 = new TreeNode(6);

    p1->right = P2;
    P2->right = P3;
    P3->right = P4;
    P4->right = P5;

    int res = minDepth(p1);
    cout << "Minimum depth of the tree: " << res << endl;

    delete p1, P2, P3, P4, P5;
    return 0;
    
}
