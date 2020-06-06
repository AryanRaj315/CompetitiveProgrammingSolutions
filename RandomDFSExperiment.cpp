#include<iostream>
#include<vector>
using namespace std;

const int N = 1e6+5; 
vector<int> g[N];
bool vis[N];

void dfs(int u){
    for(int v: g[u]){
        if(vis[v]) continue;
        else dfs(v);
    }
}
int main(){
    int n, m, u, v;
    cin >> n>> m >> u >> v;
    while(m--){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    if(vis[6]) cout << "Visited";
    else cout << "Oops..";
    return 0;
}