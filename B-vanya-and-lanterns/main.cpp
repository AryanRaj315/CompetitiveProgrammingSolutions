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
    int n, l;
    cin >> n >> l;
    int arr[n];
    arrayInput(arr, n);
    double minm = INT16_MIN;
    sort(arr, arr+n);
    int val = max(arr[0], l - arr[n - 1]) * 2;

    for (int i = 0; i < n - 1; i++)
        val = max(val, arr[i + 1] - arr[i]);

    cout.precision(10);
    cout << fixed << val / 2.0 << endl;
    return 0;
}
