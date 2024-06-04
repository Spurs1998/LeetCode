#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int lastStoneWeightII(vector<int> &stones)
{
    int sum = accumulate(stones.begin(), stones.end(), 0);
    int target = sum / 2;
    vector<int> dp(3001, 0);
    for (int i = 1; i < stones.size(); i++)
    {
        for (int j = target; j >= stones[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - stones[i]] + stones[i]);
        }
    }

    return sum - dp[target] - dp[target];
}

int main()
{
    int n;
    vector<int> stones(n);
    for (int i = 0; i < n; i++)
    {
        cin >> stones[i];
    }
    cout << lastStoneWeightII(stones) << endl;

    return 0;
}