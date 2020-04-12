#include <iostream>
#include<algorithm>
using namespace std;

int BinSearch(int low, int high){
    
}
int main(){
    // INPUT BLOCK
    int t;
    scanf("%d", &t);
    while(t--){
        int p, l;
        scanf("%d %d", &p, &l);
        int rank[l];
        int timePerChef[l];
        for(int i= 0; i < l; i++){
            scanf("%d", &rank[i]);
            timePerChef[i] = rank[i]*p*(p+1)/2;
        }

    }
    return 0;
}
// 3 6 8 10 11