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

int main() {
    GODSPEED
    ll n, m, q;
    cin >> n >> m >> q;
    while(q--){
        bool left = true, right = true;
        ll sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;
        if(sx > ex){
            if(ey > m/2){
                left = true;
            }
            if(sy > n/2){
                right = false;
            }
        }
        else if(sx < ex){
            if(ey > m/2){
                left = true;
            }
            if(sy > n/2){
                right = false;
            }
        }
        else{
            if(sx == 2){
                if(ey > m/2){
                left = true;
                }
                if(sy > m/2){
                    right = false;
                }
            }
            else{
                if(ey > n/2){
                left = true;
                }
                if(sy > n/2){
                    right = false;
                }
            }
        }
        if((left && !right) || (right && !left)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
