#include <iostream>
#include <unordered_set>
using namespace std;

bool IsHappyNumber(int val){
    unordered_set<int> seen;
    while(val != 1 && seen.find(val) == seen.end()){
        seen.insert(val);
        int sum = 0;
        while(val > 0){
            int digit = val % 10;
            sum += digit * digit;
            val /= 10;
        }
        val = sum;
    }
    return val == 1;    // 时间复杂度 O(logn) 空间复杂度 O(logn)
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int value;
        cin >> value;
        bool res = IsHappyNumber(value);
        cout << res << endl;
    }
    return 0;
}