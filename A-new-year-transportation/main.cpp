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
    int n, t;
    cin >> n >> t;
    int arr[n-1];
    arrayInput(arr, n-1);
    int i = 0;
    bool flag=false;
    while(i+1+arr[i] <= t && i+1 <= n-1){
        if(i+1+arr[i] == t){
            flag=true;
            break;
        }
        i = arr[i]+i;
    }
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
