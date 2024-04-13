#include <iostream>
#include <vector>

using namespace std;

void backtrack(vector<int> &candidates, int target, vector<int> &combination, vector<vector<int>> &result, int start)
{
    if (target == 0)
    {
        result.push_back(combination);
        return;
    }

    for (int i = start; i < candidates.size(); i++)
    {
        if (candidates[i] > target)
        {
            break;
        }

        combination.push_back(candidates[i]);
        backtrack(candidates, target - candidates[i], combination, result, i);
        combination.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> result;
    vector<int> combination;
    backtrack(candidates, target, combination, result, 0);
    return result;
}

int main()
{
    int target = 8;
    vector<int> candidates = {2, 3, 5};
    vector<vector<int>> result = combinationSum(candidates, target);

    // Print the result
    for (const auto &combination : result)
    {
        for (int num : combination)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
