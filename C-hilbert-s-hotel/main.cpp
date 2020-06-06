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
    while(t--){
        map<int, int> g_count;
        int n;
        cin >> n;
        if(n == 1){
            cout << "YES" <<endl;
            continue;
        }
        int arr[n];
        loop(i, 0, n-1){
            cin >> arr[i];
        }
        loop(k, 0, n-1){
            int mod = abs(arr[k]) % n;
            int idx = k + arr[mod];
            g_count[idx]++;
            g_count[k]--;
        }
        bool flag = false;
        for (auto itr : g_count){
            // cout <<" Boom "<< itr.first << " " << itr.second << endl;
            if(itr.second >=2 || itr.second <= -2){
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "NO" << endl;
        }  
    }
    return 0;
}
