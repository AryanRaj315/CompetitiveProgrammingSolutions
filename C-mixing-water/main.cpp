#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<cstring>
#include<map>
using namespace std;

#define loop(i, start, end) for(int i = start; i <= end; i++)
#define ll long long
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
#define lld long long double
int main() {
    GODSPEED
    int te;
    cin >> te;
    while(te--){
        double h, c, t;
        cin >> h >> c >> t;
        if (h+c -2*t >= 0){
            cout << 2 << endl;
            continue;
        }
        int k = int((h-t)/(2*t-(h+c)));
        double temp1 = ((k+1)*h+k*c)/(2*k+1);
        double temp2 = ((k+2)*h+(k+1)*c)/(2*k+3);
        if( abs(temp1-t) > abs(temp2-t)){
            cout << 2*k+3 << endl;
            continue;
        }
        cout << 2*k+1 << endl;
    }
    return 0;
}
