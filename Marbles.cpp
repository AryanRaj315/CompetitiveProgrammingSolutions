#include<iostream>
#include<map>
#include<cmath>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    int ans[t];
    for(int i = 0; i < t; i++)
        ans[i] = 1;
    int alpha = 0;
    while(t--){
        int n, k;
        scanf("%d %d",&n, &k);
        // n-1/(r-1)(n-r)
        if(n-k > k-1){
            for(int i = k-1; i <= n-1; i++){
                ans[alpha] *= i;
            }
            for(int i=2; i <= k-1; i++){
                ans[alpha] /= i;
            }
        }
        else{
            for(int i = n-k; i <=n-1; i++){
                ans[alpha] *= i;
            }
            for(int i=2; i <= n-k; i++){
                ans[alpha] /= i;
            }
        }
        alpha ++;
    }
    for (int i = 0; i < alpha; i++){
        cout << ans[i]<<endl;
    }
    
}