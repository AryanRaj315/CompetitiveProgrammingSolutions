#include <bits/stdc++.h>
#include<map>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

// 💖 Hi, thanks for using ICIE! 💖
// 🔧 To use a custom code template, press Ctrl+Shift+P and select "ICIE Template configure" from the list 🔧
// 📝 If you spot any bugs or miss any features, create an issue at https://github.com/pustaczek/icie/issues 📝

#define loop(i, start, end) for(int i = start; i <= end; i++)
#define ll long long int
#define pb push_back

#define N1 101
#define N2 101
#define K1 11
#define K2 11
#define MOD 100000000
int n1, n2, k1, k2;
ll dp[N1][N2][K1][K2];
// For sorting
#define sortva(v) sort(v.begin(),v.end())
#define sortvd(v) sort(v.rbegin(),v.rend())

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);\
    memset(dp, 0, sizeof(dp));
    cin>>n1>>n2>>k1>>k2;
    // ll ans;
    loop(i, 0, n1){
        loop(j, 0, n2){
            loop(k, 0, k1){
                loop(l, 0, k2){
                    ll ans;
                    if(i+j == 0){ ans = 1;}
                    else{
                        ans = 0;
                        if(i > 0 && k > 0){ans = (ans+dp[i-1][j][k-1][k2])%MOD;}
                        if(j > 0 && l > 0){ans = (ans+dp[i][j-1][k1][l-1])%MOD;}
                    }
                    dp[i][j][k][l] = ans;
                }
            }
        }
    }
    cout << dp[n1][n2][k1][k2];
    return 0;
}
