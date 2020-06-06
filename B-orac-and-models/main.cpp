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
        int arr[n];
        arrayInput(arr, n);
        int dp[n+1];
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            dp[i] = 0;
        }
        for (int i = 1; i <= n; i++ )  { 
            for (int j = i; j <= n; j+=i){ 
                if(arr[j-1] > arr[i-1])
                     dp[j] += 1;

                // cout << j << " " << dp[j]
                 << endl;
            } 
        }
        // cout << dp[1];
        cout << max(1, *max_element(dp, dp+n+1)) << endl;
    }
    return 0;
}
