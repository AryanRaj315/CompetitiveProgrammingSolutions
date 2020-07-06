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

// ll bin_search(ll low, ll high, ll n){
//     ll mid = (high-low)/2+low;
//     if((mid+high)/2==low){
//         return mid;
//     }
//     if(n%mid==0){
//         return bin_search(mid, high, n);
//     }
//     else{
//         return (bin_search(low, mid-1, n));
//     }
// }   

int main() {
    GODSPEED
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;https://codeforces.com/problemset/problem/479/C
        ll mind = n;
        for(ll i = 1; i*i <= n; i++){
            if (n % i == 0) {
				if (i <= k) {
					mind = min(mind, n / i);
				}
				if (n / i <= k) {
					mind = min(mind, i);
				}
            }
        }
        cout <<  mind << endl;
    }
    return 0;
}
