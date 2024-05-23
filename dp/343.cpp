#include <iostream>
#include <vector>
using namespace std;

int maxMultiple(int n){
    // dp[n]表示拆分n的最大乘积
    vector<int> dp(n + 1);
    dp[2] = 1;
    for(int i = 3; i <= n; i++){
        for(int j = 1; j < i; j++){
            dp[i] = max(dp[i], max(j * (i - j), j * dp[i - j])); // 这里为什么要比较dp[i]?  因为dp[i]可能是i本身，找一个最大的分法
        }
    }
    return dp[n];  // 时间复杂度O(n^2)，空间复杂度O(n)
}

int main(){
    int n = 10;
    cout << maxMultiple(n) << endl;
    return 0;
}