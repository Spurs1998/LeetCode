#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrome(string s, int start, int end)
{
    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void backtrack(vector<vector<string>> &result, vector<string> &current, string s, int start)
{
    if (start == s.length())
    {
        result.push_back(current);
        return;
    }

    for (int i = start; i < s.length(); i++)
    {
        if (isPalindrome(s, start, i))
        {
            current.push_back(s.substr(start, i - start + 1));
            backtrack(result, current, s, i + 1);
            current.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    vector<vector<string>> result;
    vector<string> current;
    backtrack(result, current, s, 0);
    return result;
}

int main()
{
    string s;
    while (cin >> s)
    {
        vector<vector<string>> result = partition(s);

        for (const auto &partition : result)
        {
            for (const auto &palindrome : partition)
            {
                cout << palindrome << " ";
            }
            cout << endl;
        }
    }

    return 0;
}