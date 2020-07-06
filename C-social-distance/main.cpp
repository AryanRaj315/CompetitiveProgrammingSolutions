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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> nums;
        for(int i = 0; i < n; i++){ 
            stringstream ss;  
            ss<<s[i];
            int a;   
            ss>>a;
            nums.pb(a); 
        }    
        int sum = 0;
        for(int i = 0; i < k+1; i++){
            sum += nums[i];
        }
        if(sum == 0)
        for(int i = 0; i < n; i++){
            if(i-k < 0){
                sum += nums[i];
                sum -= nums[]
            }
        }
        cout << count << endl;
    }
    return 0;
}
