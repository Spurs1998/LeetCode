#include <iostream>    // 替换数字（卡码网）
#include <string>
using namespace std;

string swapNumChar(string &s){
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){     // 处理字符比较
            ++count;
        }
    }
    int i = s.size() - 1;
    s.resize(s.size() + 5 * count);    // ！先扩容，再从后向前遍历
    int j = s.size() - 1;
    while(i >= 0){
        if(s[i] >= '0' && s[i] <= '9'){
            s[j] = 'r';
            s[j - 1] = 'e';
            s[j - 2] = 'b';
            s[j - 3] = 'm';
            s[j - 4] = 'u';
            s[j - 5] = 'n';
            i = i - 1;
            j = j - 6;
        } else{
            s[j] = s[i];
            i = i - 1;
            j = j - 1;
        }
    }
    return s;          // 时间复杂度O(n),空间O(1)，除了字符串增加之外的
}

int main(){
    string s;
    cin >> s;
    string c = swapNumChar(s);
    for(auto m : c){
        cout << m;
    }
}