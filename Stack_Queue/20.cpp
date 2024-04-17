#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValidChar(string &s){
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') st.push(')');
        else if(s[i] == '{') st.push('}');
        else if(s[i] == '[') st.push(']');
        else if(!st.empty() && st.top() == s[i]) st.pop();
        else return false;
    }
    return st.empty();
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        bool c = isValidChar(s);
        cout << c;
    }
    return 0;
}