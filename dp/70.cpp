#include <iostream>
#include <vector>
using namespace std;

int climbLadder(int n){
    if(n <= 2) return n;
    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main(){
    int t;
    cin >> t;
    int res = climbLadder(t);
    cout << res << endl;
    return 0;
}