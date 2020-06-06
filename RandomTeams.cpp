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
    ll m, n;
    ll max, min;
	scanf("%lld %lld", &n, &m);
    max =(n-m+1)*(n-m)/2;
    if(n%m == 0){
        ll val = n/m;
        min = val*(val-1)/2*m;
    }
    else{
        ll rem = n%m;
        ll val = n/m;
        min = (m-rem)*val*(val-1)/2 + rem*val*(val+1)/2;
    }
    cout << min << " "<<max;

}