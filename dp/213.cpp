#include <iostream>    // 打家劫舍II
#include <vector>
using namespace std;

int rob_maxCash(vector<int> &nums, int start_index, int end_index){
    vector<int> dp(nums.size(), 0);
    dp[start_index] = nums[start_index];
    dp[start_index + 1] = max(dp[start_index], nums[start_index + 1]);
    for(int i = start_index + 2; i <= end_index; i++){
        dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);   // 时间复杂度O(n),空间复杂度O(n)
    }

    return dp[end_index];
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
        int leftmax = rob_maxCash(nums, 0, nums.size() - 2);
        int rightmax = rob_maxCash(nums, 1, nums.size() - 1);
        int res = max(leftmax, rightmax);
        cout << res << endl;
    }

    return 0;
}