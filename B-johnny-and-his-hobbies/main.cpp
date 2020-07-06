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
        int n;
        cin >> n;
        int arr[n];
        arrayInput(arr, n);
        sort(arr, arr+n);
        bool flag = true; int val;
        int count = 0;
        int k = INT_MAX;
        set<int> a;
        for(int i = 0; i < n; i++){
            if(i!=n-1) val = arr[i]^arr[i+1];
            else val = arr[i]^arr[i-1];
            flag = true;
            count = 0;
            for(int j = 0; j < n; j++){
                if(flag==false){
                    break;
                }
                if(j==i){
                    continue;
                }
                if(arr[i]^arr[j] == val){
                    // cout << 1 << endl;
                    continue;
                    count++;
                }
                else{
                    // cout << 2 << endl;
                    flag = false;
                    break;
                }
            }
            if(flag && val!=0){

                k = min(k, val);
            }
        }
        if(flag){
            cout << k << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}
