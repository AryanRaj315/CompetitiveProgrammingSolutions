#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
//  n, k;
#define loop(i, start, end) for(int i = start; i <= end; i++)
#define ll long long int
#define pb push_back
// vector<ll> weight, value;
// ll n, w;
// int n, m;
// vector<int> dp(n+1, 0);
int main(){
    ll n;
	scanf("%lld", &n);
    ll a;
    vector<ll> vec;
    bool flag = true;
    loop(i, 0, n-1){
        scanf("%lld", &a);
        vec.pb(a);
        if(i >=1){
            if(a != vec[i-1]) flag = false;
        }
    }
    if (flag){
        cout <<0<<" "<<n*(n-1)/2;
        return 0;
    }
    sort(vec.begin(), vec.end());
    ll maxDiff = vec[n-1]-vec[0];
    ll minN = 1, maxN = 1;
    bool flag1 = false, flag2 = false;
    if(n >2)
    loop(i, 1, n-1){
        flag1 = false, flag2 = false;
        if(vec[i] == vec[0]){
            minN++;
            flag1 = true;
        }
        if(vec[n-i-1]==vec[n-1]){
            maxN++;
            flag2 = true;
        }
        if(flag1 == false && flag2 == false){
            break;
        }
    }
    cout<<maxDiff<<" "<<minN*maxN;

}