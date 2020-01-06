#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<iterator>
#include<cmath>
using namespace std;

    // {}   []
int recur(int a, int b, int c, int d, int n){
    static vector<vector<int>> soln;

    if (a + b*b + c*c*c + d*d*d*d == n){
        vector<int> sol;
        sol.push_back(a);sol.push_back(b);sol.push_back(c);sol.push_back(d);
        // cout << a << " " << b << " " << c << " " << d <<endl;
        if(find(soln.begin(), soln.end(), sol) == soln.end()){
            soln.push_back(sol);
            return 1;
        }            
        else return 0;
    }        
    if ((a + b*b + c*c*c + d*d*d*d > n) || a > n || b*b > n || c*c*c > n || d*d*d*d > n) 
        return 0;   
    return recur(a+1,b,c,d,n)+recur(a,b+1,c,d,n)+recur(a,b,c+1,d,n)+recur(a,b,c,d+1,n);
    // if(d*d*d*d > n) return 0;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j*j < n; j++){
    //         for(int k = 0; k*k*k < n; k++){
    //             return recur(i, j, k, d++, n);
    //         }
    //     }
    // }
}
int main(){
    int t,n;
    cin >> t; 
    while(t--){
        cin >> n;
        int count = recur(0, 0, 0, 0, n);
        cout << count;
    }
    return 0;
}