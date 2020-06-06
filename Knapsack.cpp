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
	int n, w;
	scanf("%d %d", &n, &w);
	vector<int> weight, value;
	int wi, vi;
	for(int i=1;i<=n;i++){
		scanf("%d %d", &wi, &vi);
		weight.pb(wi);
		value.pb(vi);
	}
    vector<int> dp(w+1, 0);// dp[i] represents the maximum value for i weight
	dp[0] = 0;
	loop(i, 1, w){
		loop(j, 0, n-1){
			if(weight[j] <= i-dp[i])
				dp[i] += max(dp[i], value[j]);
		}
	}
	cout<<dp[w];
	return 0;
}