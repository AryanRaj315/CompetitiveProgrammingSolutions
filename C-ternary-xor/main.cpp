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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[n];
        loop(i, 0, n-1){
            arr[i] = s[i] - '0';
        }
        int a[n], b[n];
        a[0] = b[0] = 1;
        bool maxDecided = false;
        loop(i, 1, n-1){
            if(arr[i] == 0){
                a[i] = b[i] = 0;
            }
            else if(arr[i] == 1){
                if(maxDecided){
                    a[i] = 0;
                    b[i] = 1;
                }
                else{
                    a[i] = 1;
                    b[i] = 0;
                    maxDecided = true;
                }
            }
            if(arr[i] == 2){
                if(maxDecided){
                    a[i] = 0;
                    b[i] = 2;
                }
                else{
                    a[i] = 1;
                    b[i] = 1;
                }
            }
        }
        loop(i, 0, n-1){
            cout << a[i]; 
        }
        cout << endl;
        loop(i, 0, n-1){
            cout << b[i]; 
        }
        cout << endl;
    }
    return 0;
}
