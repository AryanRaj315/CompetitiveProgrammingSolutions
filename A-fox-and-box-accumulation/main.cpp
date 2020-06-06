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
    int n;
    cin >> n;
    ll arr[n];
    arrayInput(arr, n);
    sort(arr, arr+n, greater<>());
    ll npiles = 1;
    loop(i, 0, n-2){
        if(arr[i] > arr[i+1] || ((arr[i] == arr[i+1]) && (arr[i]!= 0))){
            loop(j, 0, i-1){
                arr[j] -= 1;
                if(arr[j] == 0){
                    npiles++;
                }
            }

            continue;
        }
        else{
            npiles++;
        }
    }
    cout << npiles;
    return 0;
}
