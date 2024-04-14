#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++){
        auto iter = map.find(target - nums[i]);
        if(iter != map.end()){
            return {iter->second, i};
        }
        map.insert(pair<int, int>(nums[i], i));
    }
    return {};      // 时间复杂度 O(n) 空间复杂度 O(n) 
}                   // 暴力解法时间复杂度 O(n^2) 空间复杂度 O(1) 

int main(){
    int n;
    cin >> n;
    while(n--){
        int a, b, val;
        vector<int> res;
        cin >> a;
        while(a--){
            cin >> b;
            res.push_back(b);
        }
        cin >> val;
        vector<int> cur = twoSum(res, val);
        for(auto c : cur ){
            cout << c;
        } 
    }
    return 0;
}