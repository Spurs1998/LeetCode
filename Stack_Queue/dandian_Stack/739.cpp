#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemp(vector<int> &tempratures){
    stack<int> st;
    vector<int> result(tempratures.size(), 0);
    for (int i = 0; i < tempratures.size(); i++)
    {
        while (!st.empty() && tempratures[i] > tempratures[st.top()])
        {
            result[st.top()] = i - st.top();
            st.pop();
        }
        
        st.push(i);
    }

    return result;
}

int main(){
    int n;
    cin >> n;
    vector<int> tempratures(n);
    for(int i = 0; i < n; i++){
        cin >> tempratures[i];
    }
    vector<int> result = dailyTemp(tempratures);
    for(int i = 0; i < result.size(); i++){
        cout << result[i];
    }
    cout << endl;

}