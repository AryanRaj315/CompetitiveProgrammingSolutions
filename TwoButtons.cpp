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
int n, m;
vector<int> dp(n+1, 0);
int recurr(int num, int count){
    // cout<<num<<" ";
    if(num == m){
        return count;
    }
    if(num == n && count > 0){
        return 1e7+5;
    }
    if(num==1 && count>0){
        return count;
    }
    if(num<=0)
        return 1e7+5;
    if (num>m){
        return recurr(num-1, count+1);
    }
    else
    return min(recurr(num*2, count+1), recurr(num-1, count+1));
}
int main(){
	scanf("%d %d", &n,&m);
    cout<<recurr(n, 0);
}