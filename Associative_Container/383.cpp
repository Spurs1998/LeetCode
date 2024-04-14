#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

//-----------------------------------------------------------------------------------
/* bool subOfMagazine(string& a, string& b){
    int alp[26] = {0};
    for(int i = 0; i < b.size(); i++){
        alp[b[i] - 'a']++;
    }
    for(int i = 0; i < a.size(); i++){
        alp[a[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++){
        if(alp[i] < 0){
            return false;                // 时间复杂度 O(n) 空间复杂度 O(1)
        }               
    }
    return true;
} */
//-----------------------------------------------------------------------------------

bool subOfMagazine(string& a, string& b){
    unordered_map<char, int> map;
    for(auto c : b){
        map[c]++;
    }
    for(auto c : a){
        map[c]--;
        if(map[c] < 0){
            return false;                // 时间复杂度 O(n) 空间复杂度 O(1)
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string m, n;      // 自己的薄弱项
        cin >> m >> n;
        int res = subOfMagazine(m, n);
        cout << res << endl;
    }
    return 0;
}