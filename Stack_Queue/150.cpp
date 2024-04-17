#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <set>
using namespace std;

int revPolan(vector<string> &s){
    stack<int> st;
    set<string> temp = {'+','-','*','/'};
    for(int i = 0; i < s.size(); i++){
        if(!st.empty() && s[i] != temp.end()){
            
        }
    }
}