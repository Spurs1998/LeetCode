#include <iostream>
#include <vector>
using namespace std;

int minLength(vector<int>& nums,const int& target){
    int len = INT32_MAX;
    for(int i = 0, sum = nums[i]; i < nums.size() - 1; i++){
        for(int j = i + 1; j < nums.size(); j++){
            sum += nums[j];
        }
    }
}