#include<iostream>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
//  n, k;
#define loop(i, start, end) for(int i = start; i < end; i++)
#define ll long long int
#define pb push_back
vector<ll> weight, value;
ll n, w;
// int dp[100000][4] = {0};
// int recurr(){

// }

int main(){
	int n;
	cin>>n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++)
	cin>>a[i]>>b[i]>>c[i];
	int dp[n+1][3]={0};
	for(int i=0;i<n;i++)
	{
		dp[i+1][0]=a[i]+max(dp[i][1], dp[i][2]);
		dp[i+1][1]=b[i]+max(dp[i][0], dp[i][2]);
        dp[i+1][2]=c[i]+max(dp[i][0], dp[i][1]);

	}
	cout<<max(dp[n][0],max(dp[n][1],dp[n][2]));
	return 0;
}