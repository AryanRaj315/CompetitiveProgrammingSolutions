#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int n;
int main(){
    // freopen( "input.txt", "r", stdin );
	// freopen( "output.txt", "w", stdout );
	scanf( "%d", &n );
    int arr[n];
    for(int i =0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int lb, ub;
    sort(arr, arr+n);
    int max=0;
    for(int i = 0; i < n; i++){
        lb = lower_bound(arr, arr+n, arr[i]) - arr;
        ub = upper_bound(arr, arr+n, 2*arr[i])- arr;
        if((ub-lb)>max)
            max = ub-lb;
    }
    cout << n-max;
    return 0;
}
// 3 6 8 10 11