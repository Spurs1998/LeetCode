#include <iostream>
#include <vector>
using namespace std;

int maxSum(vector<int> &nums){
    int result = INT32_MIN;
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        if (sum > 0)
        {       
            result = max(sum, result);
        }
        else{
            sum = 0;
        }
        
    }
    return result;
}

int main(){
    vector<int> nums;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int res = maxSum(nums);
    return 0;
    cout << res << endl;
}