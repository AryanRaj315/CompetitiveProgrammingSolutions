#include<iostream>
#include<map>
#include<cmath>
using namespace std;


#define ll long long int
map<ll, ll> dp;
//  a, b, c, n;
ll f(ll n){
    if(n==0) return 0;
    
    if(dp[n]!=0) return dp[n];
    
    long long aux=f(n/2)+f(n/3)+f(n/4);
    
    if(aux>n) dp[n]=aux;
    else dp[n]=n;
    
    return dp[n];
}

int main(){
    while(scanf("%d",&n)==1){
        ll n;
        scanf("%lld", &n);
        int count = f(n);
        cout << count<<endl;
        // printf("%lld", seq(0, a, 1)+1);
        return 0;

    }
    
}