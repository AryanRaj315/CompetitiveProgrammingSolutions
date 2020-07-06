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
    int n, m;
    cin >> n >> m;
    ll arr[m];
    arrayInput(arr, m);
    ll time = arr[0]-1;
    loop(i, 1, m-1){
        if(arr[i] >= arr[i-1]){
            time += arr[i]-arr[i-1];
        }
        else{
            time += n-arr[i-1]+arr[i];
        }
    }
    cout << time;
    return 0;
}
