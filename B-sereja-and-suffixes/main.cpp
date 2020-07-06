#include<bits/stdc++.h>
using namespace std;

#define loop(i, start, end) for(int i = start; i <= end; i++)
#define ll long long int
#define arrayInput(arr, n) loop(i, 0, n-1){ cin >> arr[i];}
#define arrayDisplay(arr, n) loop(i, 0, n-1){ cout << arr[i] << " ";}
#define GODSPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mem(a, num) memset(a, num, sizeof(a)) 
// #define ll long long 
#define vi vector<Int>
#define pb push_back
#define mp make_pair
// For sorting
#define sortva(v) sort(v.begin(),v.end())
#define sortvd(v) sort(v.rbegin(),v.rend())

int main() {
    GODSPEED
    int n, m;
    cin >> n >> m;
    ll arr[n], l[m];
    arrayInput(arr, n);
    arrayInput(l, m);
    set<ll> unq;
    unq.insert(arr[n-1]);
    ll dp[n]; 
    memset(dp, 0, sizeof(dp));
    dp[n-1] = 1;
    for(int i = n-2; i >= 0; i--){
        unq.insert(arr[i]);
        ll new_size = unq.size();
        dp[i] = new_size;
    }
    for(int i = 0; i < m; i++){
        cout << dp[l[i]-1] << endl;
    }
    return 0;
}
