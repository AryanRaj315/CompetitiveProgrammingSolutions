#include <stdio.h>
#include<set>
#include<map>
#include<iostream>
using namespace std;
 
int n, k;
set< int > sol;
map<pair<int, int>, int> dp;
void recurr(int arr[], int cost, int k){
    if(dp[cost][k]==1){
        sol.insert(cost);
    }
    if(k==0){
        sol.insert(cost);
        dp[cost][k] = 1;
        return;
    }
    for(int i =0; i < n; i++){
        recurr(arr, cost+arr[i], k-1);
    }
}
int main()
{
    cin >> n >> k;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    recurr(arr, 0, k);
    for (auto it=sol.begin(); it != sol.end(); ++it) 
        cout << *it << ' ' ; 
    return 0;
}