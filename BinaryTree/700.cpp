#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};

TreeNode* serachBST(TreeNode* root, int val){
    if(root == nullptr) return nullptr;
    if(root->val == val) return root;
    if(root->val > val) return serachBST(root->left, val);
    return serachBST(root->right, val);

}

int main(){
    TreeNode *p1 = new TreeNode(4);
    TreeNode *p2 = new TreeNode(2);
    TreeNode *p3 = new TreeNode(7);
    TreeNode *p4 = new TreeNode(1);
    TreeNode *p5 = new TreeNode(3);

    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;

    TreeNode *res = serachBST(p1, 2);
    cout << "The value of the node is: " << res->val << endl;

    delete p4;
    delete p5;
    delete p2;
    delete p3;
    delete p1;
    
    return 0;
}