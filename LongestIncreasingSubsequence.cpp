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
ll n;
vector<int> dp(n+1, 0);
vector<ll> vec;
ll recurr(vector<ll> sol, ll num, ll count){
    if(count!=0){
        loop(i, 0, sol.size()-1){
        cout << sol[i]<<" ";
        }

        cout <<"   #count:"<<count<<" #num:"<<num<<endl;
    }
    if(num == n){
        return count;
    }
    if(count!=0){
        loop(i, 0, sol.size()-1){
        cout << sol[i]<<" ";
        }

        cout <<"   #count:"<<count<<" #num:"<<num<<endl;
    }
    else{
        vector<ll> sol1(sol);
        sol1.pb(vec[num]);
        return max(recurr(sol, num+1, count), recurr(sol1, num+1, count+1));
    }       
    if(vec[num+1] > sol[count-1]){
        vector<ll> sol1(sol);
        sol1.pb(vec[num]);
        return max(recurr(sol, num+1, count), recurr(sol1, num+1, count+1));
    }
    else{
        return recurr(sol, num+1, count);
    }
}
int main(){
	scanf("%lld", &n);
    int a;
    loop(i, 0, n-1){
        scanf("%d", &a);
        vec.pb(a);
    }
    vector<ll> sol;
    // sol.pb(vec[0]);
    cout << recurr(sol, 0, 0);
}