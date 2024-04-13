// 给定两个数组 nums1 和 nums2，返回它们的交集。输出结果中的每个元素一定是唯一的。我们可以不考虑输出结果的顺序。
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//     vector<int> res;
//     sort(nums1.begin(), nums1.end());
//     sort(nums2.begin(), nums2.end());
//     int i = 0, j = 0;
//     while(i < nums1.size() && j < nums2.size()){
//         if(nums1[i] == nums2[j]){
//             res.push_back(nums1[i]);
//             i++;
//             j++;
//         }else if(nums1[i] < nums2[j]){
//             i++;
//         }else{
//             j++;
//         }
//     }
//     return res;       // 时间复杂度 O(nlogn + mlogm + n + m) 空间复杂度 O(min(n, m))
// }
//-----------------------------------------------------------------------------------

/* vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> result;    // 定义数组的方法
    int hash[1002] = 0;
    for(auto num : nums1){
        hash[num] = 1;
    }
    for(auto num : nums2){
        if(hash[num]){
            result.insert(num);
        }
    }
    return vector<int>(result.begin(), result.end());  */      // 时间复杂度 O(n + m) 空间复杂度 O(n)
//-----------------------------------------------------------------------------------
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> res;
    unordered_set<int> s(nums1.begin(), nums1.end());
    for(auto num : nums2){
        if(s.count(num)){        // count()函数返回1或0，对于multiset和multimap返回具体的个数
            res.push_back(num);
            s.erase(num);
        }
    }
    return res;       // 时间复杂度 O(n + m) 空间复杂度 O(n)
}

/* int main(){      // 一组用例
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> res = intersection(nums1, nums2);
    for(auto num : res){
        cout << num << " ";
    }
    return 0;
} */

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> nums1(n), nums2(m);
        for(int i = 0; i < n; i++){
            cin >> nums1[i];
        }
        for(int i = 0; i < m; i++){
            cin >> nums2[i];
        }
        vector<int> res = intersection(nums1, nums2);
        for(auto num : res){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}