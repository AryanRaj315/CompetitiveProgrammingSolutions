#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<set>
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
    vector<int> err1;
    loop(i, 0, n-1){
        int a;
        cin >> a;
        err1.pb(a);
    } 
    sortva(err1);
    vector<int> err2;
    loop(i, 0, n-2){
        int a;
        cin >> a;
        err2.pb(a);
    } 
    vector<int> sol;
    sortva(err2);
    loop(i, 0, n-2){
        if((err1[i] ^ err2[i]) != 0){
            sol.pb(err1[i]);
            break;
        }
    }
    if (sol.size() == 0){
        sol.pb(err1[n-1]);
    } 
    vector<int> err3;
    loop(i, 0, n-3){
        int a;
        cin >> a;
        err3.pb(a);
    } 
    sortva(err3);
    loop(i, 0, n-3){
        if((err2[i] ^ err3[i]) != 0){
            sol.pb(err2[i]);
            break;
        }
    } 
    if (sol.size() == 1){
        sol.pb(err2[n-2]);
    } 
    cout << sol[0] << endl << sol[1];
    return 0;
}
