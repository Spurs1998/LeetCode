#include <iostream>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};

int sumOfNodes(TreeNode *root){
    queue<TreeNode*> que;
    if(root == nullptr) return 0;
    int count = 0;
    que.push(root);
    while(!que.empty()){
        int size = que.size();
        for (int i = 0; i < size; i++)
        {
            TreeNode *node = que.front();
            if(node->left != nullptr) que.push(node->left);
            if(node->right != nullptr) que.push(node->right);
            que.pop();
            ++count;
        }
        
    }
    return count;
}

int main(){
    TreeNode* p1 = new TreeNode(1);
    TreeNode* p2 = new TreeNode(2);
    TreeNode* p3 = new TreeNode(3);
    TreeNode* p4 = new TreeNode(4);
    TreeNode* p5 = new TreeNode(5);

    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;

    int res = sumOfNodes(p1);
    cout << "the sum of the nodes of tree: " << res << endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    return 0;
}