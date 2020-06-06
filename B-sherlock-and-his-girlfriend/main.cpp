#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<cstring>
#include<map>
using namespace std;


#define loop(i, start, end) for(int i = start; i <= end; i++)
#define Int long long int
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
int arr[1000001];
void Sieve(){
    memset(arr, 0, sizeof(arr));
    for(int i = 2; i*i < 1000001; i++){
        if(!arr[i]){
            for(int j = i*i; j < 1000001; j+=i){
                arr[j] = 1;
            }
        }
    }
    return;
}
int main() {
    faster();
    int n;
    cin >> n;
    Sieve();
    int count = 1;
    int ans[n];
    loop(i, 1, n){
        if(arr[i+1]){
            count = 2;
            ans[i-1] = 2;
        }
        else{
            ans[i-1] = 1;
        }
        
    }
    cout << count << endl;
    arrayDisplay(ans, n);

    return 0;
}
