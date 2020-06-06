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
    string s;
    cin >> s;
    char val;
    map<char, int> freq;
    val='r';
    for(int i = 0; i < n; i++){
        if(s[i] != val){
            freq[val]++;
        }
        (val=='r') ? val='b': val='r';   
    }
    int p_ans1 = max(freq['r'], freq['b']);
    freq['r'] = freq['b'] = 0;
    val='b';
    for(int i = 0; i < n; i++){
        if(s[i] != val){
            freq[val]++;
        }
        (val=='r') ? val='b': val='r';   
    }
    int p_ans2 = max(freq['r'], freq['b']);
    cout << min(p_ans1, p_ans2);
    return 0;
}
