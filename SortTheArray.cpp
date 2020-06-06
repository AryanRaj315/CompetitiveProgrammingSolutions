#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
//  n, k;
#define loop(i, start, end) for(int i = start; i <= end; i++)
#define ll long long int
#define pb push_back
// vector<ll> weight, value;
// ll n, w;
// int n, m;
// vector<int> dp(n+1, 0);

int main(){
    ll n;
	scanf("%lld", &n);
    vector<ll> vec;
    int a;
    loop(i, 0, n-1){
        scanf("%d", &a);
        vec.pb(a);
    }
    vector<ll> SortedVec; SortedVec = vec;
    sort(SortedVec.begin(), SortedVec.end());
    int DiffArr[n];
    loop(i, 0, n-1){
        DiffArr[i] = abs(SortedVec[i]-vec[i]);
    }
    bool checker = false;
    ll count = 0;
    ll startIndex = 0;
    loop(i, 0, n-1){
        if(DiffArr[i] > 0){
            count++;
            if (count == 1) startIndex = i;
        }
    }
    cout<<startIndex<<" "<<count;
    if(count%2==0) count--;
    ll sum = 0;
    bool yes = true;
    loop(i, startIndex, startIndex+count){
        if(DiffArr[i] != DiffArr[startIndex+count-i]){
            yes = false;
        }
    }
    if (yes){
        cout << "yes"<<endl;
        cout << startIndex+1 << " "<<startIndex+count+1;        
    }
    else{
        cout<<"no";
    }

}