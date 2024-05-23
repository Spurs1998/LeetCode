#include <iostream>
#include <vector>
using namespace std;

int diffPath(int m, int n, vector<vector<int>> &obsGrid){
    int dp[m][n] = {0};
    for(int i = 0; i < m && obsGrid[i][0] != 1; i++){
        dp[i][0] = 1;
    }
    for(int j = 0; j < n && obsGrid[0][j] != 1; j++){
        dp[0][j] = 1;
    }
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            if(obsGrid[i][j] == 1){
                dp[i][j] = 0;
            } else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }
    return dp[m - 1][n - 1];
}

int main(){
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    
    vector<vector<int>> obsGrid(m, vector<int>(n));
    cout << "Enter the elements of obsGrid (0 or 1):" << endl;
    for(auto& row : obsGrid){
        for(auto& element : row){
            cin >> element;
        }
    }
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    
    vector<vector<int>> obsGrid(m, vector<int>(n));
    cout << "Enter the elements of obsGrid (0 or 1):" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> obsGrid[i][j];
        }
    }
    
    int result = diffPath(m, n, obsGrid);
    cout << "The number of unique paths is: " << result << endl;
    for(auto& a : )
}