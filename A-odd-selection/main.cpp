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
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int odd = 0, even = 0;
        int arr[n];
        int sum = 0;
        loop(i, 0, n-1){
            cin >> arr[i];
            sum += arr[i];
            if(arr[i] & 1){
                odd++;
            }
            else{
                even++;
            }
        }
        if(odd == 0){
            cout << "No\n";
            continue;
        }
        if(n==x){
            if(sum&1){
                cout << "Yes\n";
                continue;
            }
            else{
                cout << "No\n";
                continue;
            }
        }
        if(n < x){
            cout << "No" << endl;
            continue;
        }
        if(x & 1){
            cout << "Yes\n";
            continue;
        }
        else{
            if(!even){
                cout << "No\n";
                continue;
            }
            else{
                cout << "Yes\n";
            }
        }

    }
    return 0;
}
