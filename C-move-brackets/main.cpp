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

string cfunc(string s, int x){
    char a  = s[x];
    int n = s.length();
    loop(i, x, n-2){
        s[i] = s[i+1];
    }
    s[n-1] = a;
    return s;
}
int main() {
    GODSPEED
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int len = str.length();
        int count = 0, swap=0;
        loop(i, 0, len-1){
            (str[i] == '(')?(count++):(count--);
            if(count < 0){
                str = cfunc(str, i);
                count = 0;
                swap++;
                i--;
            }            
        }
        cout << swap << endl;
    }
    return 0;
}
