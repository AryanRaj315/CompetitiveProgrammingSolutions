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
// For sorting
#define sortva(v) sort(v.begin(),v.end())
#define sortvd(v) sort(v.rbegin(),v.rend())

int main() {
    GODSPEED
    string s;
    cin >> s;
    int n = s.length(); 
    int m;
    cin >> m;
    int arr[m];
    int count[n]; memset(count, 0, sizeof(count));
    loop(i, 0, m-1){
        cin >> arr[i];
        count[arr[i]-1]++;
    }
    int sum[n];
    memset(sum, 0, sizeof(sum));
    sum[0] = count[0];
    loop(i, 1, n-1){
        sum[i] = sum[i-1] + count[i];
    }
    loop(i, 0, n/2-1){
        // cout << count[i] <<endl;
        if(sum[i]%2!=0)
            swap(s[i],s[n-i-1]);;
    }   
    cout << s;
    return 0;
}
