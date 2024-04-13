#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result(nums.size());
    int left = 0;
    int right = nums.size() - 1;
    int index = nums.size() - 1;

    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            result[index] = nums[left] * nums[left];
            left++;
        } else {
            result[index] = nums[right] * nums[right];
            right--;
        }
        index--;
    }

    return result;
}

int main() {
    // 从控制台读取输入
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // 调用函数计算结果
    vector<int> result = sortedSquares(nums);

    // 输出结果到控制台
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}