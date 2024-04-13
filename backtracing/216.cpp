#include <iostream>
#include <vector>
using namespace std;

class solution{
public:
    vector<vector<int>> result;
    vector<int> path;
    void backtracing(int k, int sum, int target, int startindex){
        if(path.size() == k){
            if(sum == target) result.push_back(path);
            return;
        }

        for(int i = startindex; i <= 9; ++i){
            sum += i;
            path.push_back(i);
            backtracing(k, sum, target, i+1);
            sum -= i;
            path.pop_back();
        }
    }

};