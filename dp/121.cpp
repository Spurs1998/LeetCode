#include <iostream>    // 121. 买卖股票的最佳时机
#include <vector>
#include <algorithm>
using namespace std;
 
/* class Solution {      
public:  
    int maxProfit(vector<int>& prices) {  // 暴力解法 时间复杂度O(n^2) 空间复杂度O(1) 
        int result = 0;
        for(int i = 0; i < prices.size(); i++){
            for(int j = i; j < prices.size(); j++){
               result = max(result, prices[j] - prices[i]);
               }
            }
        return result;
    }  
}; */

/* int maxProfit(vector<int> &prices){
    int result = 0;
    int minprice = INT_MAX;
    for(int i = 0; i < prices.size(); i++){     // 贪心算法 时间复杂度O(n) 空间复杂度O(1)
        minprice = min(minprice, prices[i]);
        result = max(result, prices[i] - minprice);
    }

    return result;
} */

