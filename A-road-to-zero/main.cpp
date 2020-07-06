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

int main() {
    GODSPEED
    int t;
    cin >> t;
    while(t--){
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        ll cost = 0;
        if(x*y > 0){
            cost = min(x*a + y*a, min(x, y)*b + a*(max(x,y)-min(x,y)));
        }
        else if(x*y == 0){
            cost = max(x, y)*a;
        }
        else if(x*y < 0){
            cost = x*a+y*a;
        }
        cout << cost << endl;
    }
    return 0;
}
