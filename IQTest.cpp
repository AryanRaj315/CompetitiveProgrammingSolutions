#include<iostream>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
//  n, k;
#define loop(i, start, end) for(int i = start; i <= end; i++)
#define ll long long int
#define pb push_back
// vector<ll> weight, value;
// ll n, w;
int main(){
	int n;
	scanf("%d", &n);
    ll arr[n];
    loop(i, 0, n-1){
        scanf("%lld", &arr[i]);
    }
    bool even = true;
    int ev_c = 0, od_c = 0;
    loop(i, 0, 2){
        if(arr[i]%2==0) ev_c++;
        else od_c++;
    }
    if(od_c>ev_c) even = false;
    if(even){
        loop(i, 0, n-1){
            if(arr[i]%2 != 0) {cout<<i+1<<endl; return 0;}
        }
    }
    else{
        loop(i, 0, n-1){
            if(arr[i]%2 == 0) {cout<<i+1<<endl; return 0;}
        }
    }
}