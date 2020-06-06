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
    int r, x, y, x1, y1;
    cin >> r >> x >> y >> x1 >> y1;
    long double dist = pow(pow(x-x1, 2)+pow(y-y1, 2), 0.5);
    int ans;
    if(dist%(2*r) == 0){
        ans = dist/(2*r);
    }
    int ans = dist/(2*r)+2;
    cout << ans;
    int slope = (y1-y)/(x1-x)

    while(dist > 2*r){

    }
    return 0;
}
