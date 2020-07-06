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
    int n, t;
    cin >> n >> t;
    int arr[n];
    arrayInput(arr, n);
    queue<int> a;
    int sv = 0, max_s=0;
    for(int i=0; i <= n-1; i++){
        if(arr[i] > t){
            while(!a.empty()){
                a.pop();
            }
            sv=0;
            continue;
        }
        sv+=arr[i];
        if(sv <= t){
            a.push(arr[i]);
            int size = int(a.size());
            max_s = max(max_s, size);
        }
        else{
            while(sv > t){
                int val = a.front();
                sv-=val;
                a.pop();
            }
            a.push(arr[i]);
            int size = int(a.size());
            max_s = max(max_s, size);
        }
    }
    cout << max_s ;
    return 0;
}
