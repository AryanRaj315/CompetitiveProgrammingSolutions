#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<cstring>
#include<map>
using namespace std;


#define loop(i, start, end) for(int i = start; i <= end; i++)
#define rev(i, start, end) for(int i = start; i >= end; i--)

#define ll long long int
#define arrayInput(arr, n) loop(i, 0, n-1){ cin >> arr[i];}
#define arrayDisplay(arr, n) loop(i, 0, n-1){ cout << arr[i] << " ";}
#define GODSPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mem(a, num) memset(a, num, sizeof(a)) 
// #define ll long long 
#define vi vector<Int>
#define pb push_back
// For sorting
#define sortva(v) sort(v.begin(),v.end())
#define sortvd(v) sort(v.rbegin(),v.rend())
#define MOD 1000000007
// Define size of sieve array here as MAX
// bool prime[20001];
// #define MAX 20001 
// void sieve() { 
//     memset(prime, true, sizeof(prime)); 
//     for (int p=2; p*p<=MAX; p++) { 
//         if (prime[p] == true) { 
//             for (int i=p*p; i<=MAX; i += p) 
//                 prime[i] = false; 
//         } 
//     } 
// } 

ll getFactors(int n){
    int count = 0;
    for(int i = 2; i <= n/2; i++){
        if(n%i==0)
        count++;
    }
    return count;
}
int main() {
    GODSPEED
    ll n, k;
    // sieve();
    cin >> n >> k;

    ll dp[n+1][k+1];
    dp[1][1] = 1;
    memset(dp, 0, sizeof(dp));
    loop(i, 0, k){
        dp[0][i] = 0;
        if(i > 1)
            dp[1][i] = 1;        
    }
    // cout << "SI" << endl;
    loop(i, 1, n){
        loop(j, 1, i*i-1){
            if(j == k+1){
                break;
            }
            if(j == 1){
                dp[i][j] = i%MOD;
                continue;
            }
            dp[i][j] = (dp[i][j-1]%MOD+(i-1)%MOD + (getFactors(i)*(k-1))%MOD)%MOD;
        }
    }
    cout << dp[n][k] << endl;
    // loop(i, 1, 8){
    //     cout << dp[i][2] << endl;
    // }
    return 0;
}
