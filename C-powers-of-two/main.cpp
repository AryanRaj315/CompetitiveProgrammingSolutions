#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<cmath>
#include<cstring>
#include<map>
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
// For sorting
#define sortva(v) sort(v.begin(),v.end())
#define sortvd(v) sort(v.rbegin(),v.rend())

int main() {
    GODSPEED
    ll n, k;
    cin >> n >> k;
    multiset<ll, greater<ll>> ans;
    int sum = 0;
    loop(i, 0, 31){
        ll num = (n >> i) & 1;
        if(num){
            ll val = pow(2, i);
            ans.insert(val);
            sum += val;
        }
    }
    ll minSize = ans.size();
    if(minSize > k || sum < k){
        cout << "NO" ;
    }
    else if(minSize == k){
        cout << "YES\n";
        for(auto itr: ans){
            cout << itr << " ";
        }
    }
    else{ // K is greater than minSize
        cout << "YES\n";
        ll extra = k - minSize;
        // cout << extra << endl;
        while(extra){
            ll val = *ans.begin();
            // cout << val <<endl;
            ans.erase(ans.begin());
            ans.insert(val/2);
            ans.insert(val/2);
            extra--;
        }
        for(auto itr: ans){
            cout << itr << " ";
        }
    }
    return 0;
}
