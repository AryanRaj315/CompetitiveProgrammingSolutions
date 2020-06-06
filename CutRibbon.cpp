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
	int n, a, b, c;
	scanf("%d %d %d %d", &n,&a,&b,&c);
	vector<int> dp(n+1, 0);
    dp[0] = 0;
	int x, y, z;
	loop(i, 1, n){
		x=y=z=-1;
		if(i>=a)
            x=dp[i-a];
        if(i>=b)
            y=dp[i-b];
        if(i>=c)
            z=dp[i-c];
        if(x==-1 && y==-1 && z==-1)
            dp[i]=-1;
        else
            dp[i]=max(max(x,y),z)+1;
	}
	cout << dp[n];
}