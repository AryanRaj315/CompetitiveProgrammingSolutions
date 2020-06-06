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
	ll n, m, a;
	scanf("%lld %lld %lld", &n, &m, &a);
    ll l, w;
    if(n%a == 0)
        l = n/a;
    else 
        l = n/a+1;
    if(m%a == 0)
        w = m/a;
    else 
        w = m/a+1;
    ll num = l*w;
    cout<<num<<endl;

}