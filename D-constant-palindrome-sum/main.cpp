#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<cstring>
#include<map>
using namespace std;


#define loop(i, start, end) for(int i = start; i <= end; i++)
#define Int long long int
// #define ll long long 
#define vi vector<Int>
#define pb push_back
// For sorting
#define sortva(v) sort(v.begin(),v.end())
#define sortvd(v) sort(v.rbegin(),v.rend())

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    faster();
    int t;
    cin >> t;
    Int ans[t];
    int alpha = 0;
    while(t--){
        int n, k;
        cin >> n >> k;
        Int arr[n], sum[n/2];
        memset(sum, 0, sizeof(sum));
        Int count = 0;
        loop(i, 0, n-1){
            cin >> arr[i];
            if(arr[i] > k){
                arr[i] = k;
                count++;
            }
            int j;
            if(i >= n/2){
                j = n-i-1;
            }
            else j = i;
            sum[j] += arr[i]; 
        }
        // cout << count<<endl;
        Int min = *min_element(sum, sum+n/2);
        // cout << min << endl;
        loop(i, 0, n/2-1){
            if(arr[i] + arr[n-i-1] == min){
                continue;
            }
            else{
                if(arr[i] >= arr[n-i-1]){
                    arr[i] = min - arr[n-i-1];
                }
                else{
                    arr[n-i-1] = min - arr[i];
                }
                count++;
            }
        }
        ans[alpha] = count;
        alpha++;
    }
    loop(i, 0, alpha-1){
            cout << ans[i] << endl;
        }
    
}
