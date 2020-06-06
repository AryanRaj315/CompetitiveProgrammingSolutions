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

// #define ll long long 
#define vi vector<Int>
#define all(v) v.begin(), v.end()
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
        ll n, k;
        cin >> n >> k;
        vector<ll> arr;
        ll a;
        loop(i, 0, n-1){
            cin >> a;
            arr.pb(a);
        }
        set<ll> unq(all(arr));
        int len = unq.size();
        if(len > k){
            cout<<-1<<endl;
            continue;
        }
        ll i = 1;
        while(len != k){
            unq.insert(i);
            i++;
            len = unq.size();
        }
        cout << n*k << endl;
        loop(i, 0, n-1){
            for(auto itr:unq)
                cout << itr << " ";
        }
        cout << endl;
    }
    
    return 0;
}
