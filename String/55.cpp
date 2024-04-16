#include <iostream>    // 卡码网55 右旋字符串与迭代法遍历二叉树 （中左右、左右中）
#include <string>
#include <algorithm>
using namespace std;

string rightReverse(string &s, int k){
    reverse(s.begin(), s.end());
    reverse(s.begin() , s.begin() + k);
    reverse(s.begin() + k, s.end());
    return s;
} // 时间复杂度O(n) 空间复杂度O(1)

int main(){
    int m;
    cin >> m;
    string s;
    cin >> s;
    string c = rightReverse(s, m);
    for(auto a : c){
        cout << a;
    }
}