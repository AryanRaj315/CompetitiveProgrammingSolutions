#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, m;
    scanf("%d", &n);
    int arr1[n];
    int sumarr1[n] = {0};
    for(int i=0; i < n; i++){
        scanf("%d", &arr1[i]);
        if(i > 0)
            sumarr1[i] += arr1[i] + sumarr1[i-1];
        else sumarr1[i] = arr1[i];
    }
    scanf("%d", &m);
    int arr2[m];
    for(int i=0; i < m; i++){
        scanf("%d", &arr2[i]);
    }
    
    for(int i = 0; i < m; i++){
        cout << lower_bound(sumarr1 , sumarr1+n, arr2[i]) - sumarr1+1 <<endl;
    }
}