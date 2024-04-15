#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int sumOfFour(vector<int> &a, vector<int> &b, vector<int>& c, vector<int> &d ){
    unordered_map<int, int> map;
    for(auto i : a){
        for(auto n : b){
            map[i + n]++;
        }
    }
    int count = 0;
    for(auto m : c){
        for(auto k : d){
            if(map.find(0 - (m + k)) != map.end()){
                count += map[0 - (m + k)];
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int h;
        cin >> h;
        vector<int> a(h), b(h), c(h), d(h);
        for(int i = 0; i < h; i++){
            cin >> a[i];
        }
        for(int i = 0; i < h; i++){
            cin >> b[i];
        }
        for(int i = 0; i < h; i++){
            cin >> c[i];
        }
        for(int i = 0; i < h; i++){
            cin >> d[i];
        }
        int res = sumOfFour(a, b, c, d);
        cout << res << endl;
        
    }
    return 0;
}