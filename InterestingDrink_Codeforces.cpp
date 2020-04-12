#include <iostream>
#include<algorithm>
using namespace std;

#define ll long long


int BS(int low, int high, ll x[], ll q){
    int mid = (low+high)/2;
    if(q == 0)
        return 0;
    // cout <<"hey";
    if(low == high || x[mid])
        return low;
    if(x[mid] < q)
        BS(low, mid, x, q);
    else if(x[mid] > q)
        BS(mid, high, x, q);
}asdfghjkhgggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg
int main(){
    // INPUT BLOCK
    int n, q, c;
    scanf("%d", &n);
    ll x[n]; 
    for(int i = 0; i < n; i++){
        scanf("%lld", &x[i]);
    }
    scanf("%d", &q);
    ll m[q];
    for(int i = 0; i < q; i++){
        scanf("%lld", &m[i]);
    }
    // -------------------
    // Sorting to use Binary Search
    sort(x, x+n);
    // Binary search for each day
    for(int i = 0; i < q; i++){
        int ans = BS(0, n-1, x, m[i]);
        printf("%d\n", ans);
    }
    return 0;
}
// 3 6 8 10 11