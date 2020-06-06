#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
//  n, k;
#define loop(i, start, end) for(int i = start; i <= end; i++)
#define revloop(i, start, end) for(int i = start; i >= end; i--)
#define ll long long int
#define pb push_back
// vector<ll> weight, value;
// ll n, w;
int main(){
    cout<<"sup";
	int n, m, num1, num2;
    vector<int> a, b;
    scanf("%d", &n);
    cout<<"sup";
    loop(i, 0, n-1){
        cout<<"sup";
        scanf("%d", &num1);
        a.pb(num1);
        
    }
    scanf("%d", &m);
    loop(i, 0, m-1){
        scanf("%d", &num2);
        b.pb(num2);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int loop_count = min(n, m);
    int c_a = 0, c_b = 1;
    int count = 0;
    while(c_a!=n || c_b!=m){
        if(a[c_a] > b[c_a]+1){
            c_b++;
        }
        else if(a[c_a] < b[c_a]+1){
            c_a++;
        }
        else{
            c_a++;
            c_b++;
            count++;
        }
    }
    cout<<count;

}