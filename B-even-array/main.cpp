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
        int n;
        cin >> n;
        int arr[n];
        bool good = true;
        int count = 0, even = 0, odd = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(i%2 != arr[i]%2){
                good = false;
                if(arr[i]%2 == 0){
                    even++;
                }
                else{
                    odd++;
                }
                count++;
            }
        }
        if(!good){
            if(count%2!=0 || even!=odd){
                cout << -1 << endl;
                continue;
            }
            else{
                cout << even << endl;
                continue;
            }
        }
        else{
            cout << 0 << endl;
            continue;
        }
    }
    return 0;
}
