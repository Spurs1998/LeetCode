#include <iostream>   // 没做出来
#include <vector>
using namespace std;

int minCost(vector<int> &cost){
    int n = cost.size();
    int sum = 0;
    vector<int> dp(n + 1);  // dp表示每层台阶的最小花费
    dp[0] = 0;
    dp[1] = 0;
    for(int i = 2; i < n; ){
        if(dp[i - 1] + cost[i - 1] < dp[i - 2] + cost[i - 2]){
            i++;
            sum += cost[i - 1];
            dp[i] = dp[i - 1] + cost[i - 1];
        } else {
            i = i + 2;
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        
    }
}