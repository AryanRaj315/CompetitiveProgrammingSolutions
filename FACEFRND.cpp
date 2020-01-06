#include <bits/stdc++.h>

using namespace std;
    // {}   []

int main(){
    int id, n;
    int t;
    cin >> t;
    int ans; 
    double alp = t;
    int j = 0;
    int ID[t];
    set <int > boom; 
    while(t--){
        scanf("%d %d", &ID[j],&n);
        boom.insert(ID[j]);
        int a;
        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            boom.insert(a);
        }
        // ans[j] = boom.size() - t;
        j++; 
    }
    ans = boom.size() - alp; 
    // for (auto it=boom.begin(); it != boom.end(); ++it) 
    //     cout << ' ' << *it;    
    printf("%d", ans);
    return 0;
}