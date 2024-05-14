#include <iostream>
#include <vector>
using namespace std;

int feiBoNaQi(int n){
    if(n <= 1) return n;
    vector<int> dp(n + 1);   // 1.dp数组下标及其含义  2.初始值
    dp[0] = 0;                  // 3.遍历顺序 4.递推公式
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];  
    }
    return dp[n];
    
}

int main(){
    int t;
    cin >> t;
    int res = feiBoNaQi(t);
    cout << res << endl;
    return 0;
}