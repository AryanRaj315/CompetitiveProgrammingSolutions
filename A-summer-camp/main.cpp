#include <bits/stdc++.h>
using namespace std; 

int change_bus(int** price, int n, int m, int row, int col, int** dp){
    if(row == n){
        return 0;
    }
    if(dp[row][col] != -1){
        return dp[row][col];
    }
    int a = INT_MAX, b = INT_MAX, c = INT_MAX;
    a = price[row][col]+change_bus(price, n, m ,row+1, col, dp);
    if(col-1 >= 0){        
    	b = price[row][col]+change_bus(price, n, m, row+1, col-1, dp);
    }
    else if(col + 1 <= m-1){        
    	c = price[row][col]+change_bus(price, n, m, row+1, col+1, dp);
    }
    dp[row][col] = min(a, min(b, c));
    return dp[row][col];
}
int main()
{
    int n, m;
    cin >> n >> m;
    int** price;
    for(int i = 0; i < n; i++){
        price[i] = new int[m];
        for(int j = 0; j < m; j++) cin >> price[i][j];
    }
    
    int **dp = new int *[n];
    for(int i = 0; i < n; i++) dp[i] = new int[m];
    
    memset(dp, -1, sizeof(dp));
    int Min = INT_MAX;
    for(int i = 0; i < m; i++){
        Min = min(Min, change_bus(price, n, m, 0, i, dp));
    }
    cout << Min;;
    return 0;
}
