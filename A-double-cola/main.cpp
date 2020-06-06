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
const string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
int main() {
    GODSPEED
    int n;
    cin >> n;
    if(n <=5){
        cout << names[n-1];
        return 0;
    }
    int k = (int)(log2(n/5+1))+1;
    int sum = 5*pow(2, k-1)-5;
    n -= sum;
    int idx = n/pow(2, k-1);
    cout << names[idx];
    return 0;
}
