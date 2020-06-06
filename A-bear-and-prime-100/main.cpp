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
    // int n;
    // cin >> n;
    // int arr[n];
    // arrayInput(arr, n);
    int prime[] = {2, 3, 4, 5, 7, 9, 11, 13, 17, 19, 23, 25, 29, 31, 37, 41, 43, 47, 49};
    int count = 0;
    loop(i, 0, 18){
        cout << prime[i] << endl;
        fflush(stdout);
        string inp;
        cin >> inp;
        if(inp == "yes"){
            count ++ ;
            if(count > 1){
                break;
            }
        }
    }
    if(count > 1){
        cout << "composite";
    }
    else{
        cout << "prime";
    }
    return 0;
}
