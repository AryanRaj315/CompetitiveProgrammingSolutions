#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<unordered_set>
#include<cstring>
#include<set>
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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll sum = 0;
        vector<ll> ans;
        map<pair<ll, ll>, ll> coord;
        map<pair<ll, ll>, ll> idx_i;
        map<pair<ll, ll>, ll> idx_e;
        int x = 0, y = 0;
        coord[make_pair(0, 0)] = 1;

        loop(i, 0, n-1){
            if(s[i] == 'L') x -= 1;
            else if(s[i] == 'R') x += 1;
            else if(s[i] == 'U') y += 1;
            else if(s[i] == 'D') y -= 1;

            coord[make_pair(x, y)] += 1;
            if(coord[make_pair(x, y)] == 1)
                idx_i[make_pair(x, y)] = i;
            idx_e[make_pair(x, y)] = i;
        } 
        for (auto itr = coord.begin(); itr!= coord.end(); itr++) {
            cout << 
            // if(coord[make_pair(*itrfirst, *itr.second)] > 1){
            //     ans.pb(idx_i[make_pair(x, y)]+1);
            //     ans.pb(idx_e[make_pair(x, y)]+1);
            // }
        }  
        if(ans.size() == 0){
            cout << -1 << endl;
        }
        else{
            cout << ans[0] << " " << ans[1] << endl;
        }
    }
    return 0;
}
