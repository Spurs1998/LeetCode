#include <iostream>
#include <string>
using namespace std;

string reflect(string& a){
    for(int i = 0, j = a.size() - 1; i < j; i++, j--){
        swap(a[i], a[j]);
    }
}
string reverseStr(string &s, int k){
    int n = s.size();
    if(n < k){
        reflect(s);
    }else if(k <= s.size() < 2 * k){
        reflect(s)
    } else {

    }
    for(int i = 0; i < s.size(); i++){
        if((i + 1) % (2 * k) == 0){

        }
        if(s.size() - 1 - i < k){
            reverse()
        }
    }
}