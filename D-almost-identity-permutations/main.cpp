#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<cstring>
#include<map>
using namespace std;


#define loop(i, start, end) for(int i = start; i <= end; i++)
#define ll long long
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

ll factorial(ll n) { 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 
ll NcR(ll n, ll r) { 
    ll p = 1, k = 1; 
    if (n - r < r) 
        r = n - r; 
    if (r != 0) { 
        while (r) { 
            p *= n; k *= r; 
            ll m = __gcd(p, k); 
            p /= m; k /= m; 
            n--; r--; 
        } 
    } 
    else
        p = 1; 
    return p;
}
ll derangement(ll n) 
{ 
    ll der[n + 1]; 
    der[0] = 1; 
    der[1] = 0; 
    der[2] = 1; 
    for (int i = 3; i <= n; ++i) 
        der[i] = (i - 1) * (der[i - 1] +  der[i - 2]); 
    return der[n]; 
} 
int main() {
    GODSPEED
    ll n, k;
    cin >> n >> k;
    ll ans=0;
    loop(i, 0, k){
        ans += NcR(n, i)*derangement(i);
    }
    cout << ans;
    return 0;
}
