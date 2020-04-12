#include<iostream>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
//  n, k;
#define loop(i, start, end) for(int i = start; i <= end; i++)
#define ll long long int
#define pb push_back
// vector<ll> weight, value;
// ll n, w;
int main(){
	int n, k;
	cin>>n >> k;
	int h[n];
	for(int i=0;i<n;i++)
	    cin>>h[i];

    vector<int> dp(n, 1e9+5);
    dp[0] = 0;
    dp[1] = abs(h[1]-h[0]);
	for(int i=2; i < n; i++){
        loop(j, 1, k){
            if(i-j < 0)
            break;
            dp[i] = min(dp[i], dp[i-j]+abs(h[i]-h[i-j]));
        }
	}
	cout<<dp[n-1];
	return 0;
}