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
        string b;
        cin >> b;
        vector<char> a;
        int n = b.length();
        for(int i = 0; i <n; i+=2){
            if(i==n-2){
                a.pb(b[i]);
                a.pb(b[i+1]);
            }
            else
                a.pb(b[i]);
        }
        int size = a.size();
        for(int i = 0; i < size; i++){
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
