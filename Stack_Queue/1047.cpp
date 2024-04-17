#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

string deleteDup(string &s){
    stack<char> st;
    string m;
    for( int i = 0; i < s.size(); i++){
        if(!st.empty() && st.top() == s[i]){
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        m += st.top();
        st.pop();
    }
    reverse(m.begin(), m.end());
    return m;
    
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        string a = deleteDup(s);
        for(auto i : a){
            cout << i;
        }
    }
    return 0;
}