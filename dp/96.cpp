#include <iostream>  // 再回顾一下，尤其递推公式
using namespace std;

int binarySearchTree(int n){
    // dp[n]表示n个节点的二叉搜索树的个数
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = 0;
        for(int j = 1; j <= i; j++){
            dp[i] += dp[j - 1] * dp[i - j];
        }
    }
    return dp[n];  // 时间复杂度O(n^2)，空间复杂度O(n)
}

int main(){
    int n = 3;
    cout << binarySearchTree(n) << endl;
    return 0;
}