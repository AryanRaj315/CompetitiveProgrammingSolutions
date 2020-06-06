#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
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
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if( n%2 == 0 && k%2 != 0 || (n < k)){
            cout << "NO" << endl;
        }
        ll sum = n;
        vector <ll> ans;
        bool even = true;
        if(even){
            loop(i, 0, k-1){
                if(i != k-1){
                    ans.pb(2);
                    sum -= 2;
                }
                if(sum % 2 != 0){
                    ans.pb(sum);
                }
                else{
                    cout << "NO" << endl;
                    even = false;
                    break;
                }
            }
        }
        else if(!even){
            loop(i, 0, k-1){
                if(i != k-1){
                    ans.pb(1);
                    sum -= 1;
                }
                else{
                    if(sum % 2 != 0)
                        ans.pb(sum);
                    else{
                        cout << "NO" << endl;

                        break;
                    }
                } 
            }
        }
        loop(i, 0, n-1){
            cout << ans[i] << " " ;
        }
    }
    return 0;
}
