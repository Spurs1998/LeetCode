#include <iostream>  // 01背包问题
#include <vector> 
using namespace std;

int maxValue(vector<int> &weight, vector<int> &value, int n){
    int bag = n;
    vector<vector<int>> dp(weight.size(), vector<int>(n + 1, 0));
    for(int j = weight[0]; j <= n; j++){
        dp[0][j] = value[0];
    }
    
    for(int i = 1; i < weight.size(); i++){
        for(int j = 1; j <= n ; j++){
            if(weight[i] > j) dp[i][j] = dp[i - 1][j];
            else{
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
            }
        }
    }
    
    return dp[weight.size() - 1][n];
       
}

int main(){
    int M, N;
    cin >> M >> N;
    vector<int> weight(M), value(M);
    for(int a = 0; a < M; a++){
        cin >> weight[a];
    }
    for(int b = 0; b < M; b++){
        cin >> value[b];
    }
    cout << maxValue(weight, value, N) << endl;
}