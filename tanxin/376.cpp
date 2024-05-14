#include <iostream>
#include <vector>
using namespace std;

vector<int>& squareNums(vector<int> nums){
    int n = nums.size();
    vector<int> result(n, 0);
    for(int i = 0, j = n - 1, k = n - 1; i < j; ){ 
        if(nums[i]*nums[i] > nums[j] * nums[j]){
            result[k] = nums[i] * nums[i];
            i++;
            k--;
        } else{
            result[k] = nums[j] * nums[j];
            j--;
            k--;
        }
    }
    return result;
}

int main(){
    vector<int> temp;
    int a;
    while(cin >> a){
        temp.emplace_back(a);
    }
    cout << endl;
    vector<int> res = squareNums(temp);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}