#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<cstring>
#include<set>
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
#define all(arr)
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
        map<int, int> freq;
        loop(i, 0, n-1){
            cin >> arr[i];
            freq[arr[i]]++;
        }
        set<ll> s(arr, arr+n);
        int unq = s.size();
        int c2 = 1;
        loop(i, 0, n-1){
            if(freq[arr[i]] > c2){
                c2 = freq[arr[i]];
            }
        }
        if(unq != c2){
            cout << min(unq, c2) << endl;
        }
        else{
            cout << unq - 1 << endl;
        }
    }
    return 0;
}
