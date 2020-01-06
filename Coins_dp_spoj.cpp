#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

map<int, long long> dp;
long long recur(int n){
    long long int sum2;
    long long int sum1 = n;
    if (n == 0)
        return sum1;
    if(dp[n] != 0)
        return dp[n];
    else
        sum2  = recur(n/2)+recur(n/3)+recur(n/4);
        
    dp[n] =  (sum1 > sum2)? sum1 : sum2;
    return dp[n];
}
int main(){
    int n;
    while(scanf("%d", &n) == 1){
        
        cout << recur(n)<<endl;
    }
    return 0;
}