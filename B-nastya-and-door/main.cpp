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

// #define ll long long 
#define vi vector<Int>
#define pb push_back
// For sorting
#define sortva(v) sort(v.begin(),v.end())
#define sortvd(v) sort(v.rbegin(),v.rend())

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    faster();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        ll arr[n];
        arrayInput(arr, n);
        ll peak[n];
        peak[0] = 0;
        int count = 0;
        vector<int> idx;
        loop(i, 1, n-2){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                count++;
                idx.pb(i);
            }
            peak[i] = count;
        }
        ll minL = 0; ll temp = -1;
        loop(i,0,n-k)
        {
            if(peak[i+k-2] - peak[i] > temp)
            {
                temp = peak[i+k-2] - peak[i];
                minL = i;
            }
        }
        cout << temp+1 << " " << minL+1 << endl;
        }
    
    return 0;
}
