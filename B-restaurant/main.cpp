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
#define mp make_pair
// For sorting
#define sortva(v) sort(v.begin(),v.end())
#define sortvd(v) sort(v.rbegin(),v.rend())

int main() {
    GODSPEED
    int n;
    cin >> n;
    vector<pair<ll, ll>> time;
    loop(i, 0, n-1){
        ll l, r;
        cin >> l >> r;
        time.pb(mp(r, l));
    }
    sortva(time);
    ll count=0, r=0;
    for (int i = 0; i < n; ++i)
    {
        if(time[i].second>r){
            count++;
            r=time[i].first;
        }
    }
    cout<<count<<endl;
    return 0;
}
