#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> result;
vector<int> path;

void backtracing(int target, int sum, int start, vector<int> candidates){
    int size = candidates.size();
    if (sum > target) return;
    if(sum == target){
        result.push_back(path);
        return;
    }

    for(int i = start; i < size; i++){
        sum += candidates[i];
        path.push_back(candidates[i]);
        backtracing(target, sum, i, candidates);
        sum -= candidates[i];
        path.pop_back();
    }  
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> candidates;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            candidates.push_back(num);
        }
        int target;
        cin >> target;
        backtracing(target, 0, 0, candidates);
        for (const auto& res : result) {
            for (const auto& num : res) {
            cout << num << " ";
            }
            cout << endl;
        }
    }
    
}