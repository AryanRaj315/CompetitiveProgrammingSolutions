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
    int n, k;
    cin >> n >> k;
    int arr[n];
    arrayInput(arr, n);
    int sum[n-k+1];
    memset(sum, 0, sizeof(sum));
    for(int i = 0; i < k; i++){
        sum[0] += arr[i];
    }
    int minm = INT_MAX;
    int pos = 1;
    for(int i = k; i < n; i++){
        sum[i-k+1] = sum[i-k]-arr[i-k]+arr[i];
        if(sum[i-k+1] < minm){
            minm = sum[i-k+1];
            pos = i-k+2;
        }
    }
    cout << pos;
    return 0;
}
