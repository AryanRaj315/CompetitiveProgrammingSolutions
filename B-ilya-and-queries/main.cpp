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
    string s;
    cin >> s;
    int len = s.length();
    int arr[len];
    memset(arr, 0, sizeof(arr));
    arr[0] = 0;
    loop(i, 1, len-1){
        if(s[i] == s[i-1]){
            arr[i] = arr[i-1]+1;
        }
        else{
            arr[i] = arr[i-1];
        }
    }
    int n;
    cin >> n;
    while(n--){
        int l, r;
        cin >> l >> r;
        cout << arr[r-1] - arr[l-1] << endl;
    }
    return 0;
}
