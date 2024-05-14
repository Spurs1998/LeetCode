#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> result;
vector<int> path;

void backtracing(int target, int index, int sum, vector<int> candidates){
    if(sum == target){
        result.push_back(path);
        return;
    }

}