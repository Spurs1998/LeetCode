#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cookies(vector<int> &g, vector<int> &s){
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int result = 0, i = 0;
    for(int index = 0; index < s.size(); index++){
        if(i <= g.size() && s[index] >= g[i]){
            result++;
            i++;
        }
    }
    return result;
}
    int a = IN
int main(){
    vector<int> kids;
    vector<int> size_of_cookies;
    int a, b;
    cout << "the weikou of kids: " << endl;
    while(cin >> a){
        kids.push_back(a);
        if (cin.get() == '\n') {
            break;
        }
    }
    cout << "the size of cookies: " << endl;
    while(cin >> b){
        size_of_cookies.push_back(b);
        if (cin.get() == '\n') {
            break;
        }
    }   
    int i = cookies(kids, size_of_cookies);
    cout << "the number of kids that can be satisfied: " << i << endl;
    return 0;
}