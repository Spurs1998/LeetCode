#include <iostream>   // 198. 打家劫舍
#include <vector>
using namespace std;

int maxCash(vector<int> &nums){
    /* if(nums.size() == 0) return 0;
    if(nums.size() == 1) return nums[0]; */
    vector<int> dp(nums.size(), 0);
    dp[0] = nums[0];
    dp[1] = max(dp[0], nums[1]);
    for(int i = 2; i < nums.size(); i++){
        dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);   // 时间复杂度O(n) 空间复杂度O(n)
    }

    return dp[nums.size() - 1];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        int res = maxCash(nums);
        cout << res << endl;
    }
    

    return 0;
}