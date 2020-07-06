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
    int enc[10]={2,3,223,5,53,7,7222,7332};
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> num;
    loop(i, 0, n-1){
        int idx = s[i]-'0';
        if(idx == 0 || idx == 1){
            continue;
        }
        int val = enc[idx-2];
        while(val){
            num.pb(val%10);
            val /= 10;
        }
    }
    sortvd(num);
    int sz = num.size();
    loop(i, 0, sz-1){
        cout << num[i];
    }
    return 0;
}
