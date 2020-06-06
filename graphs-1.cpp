#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

// This Depth First Search Algorithm
void print(int** edges, int n, int sv, int* visited){
    cout << sv << endl;
    visited[sv] = true;
    for(int i = 0; i < n; i++){
        if(i == sv){ continue; }
        if(edges[sv][i] == 1){
            if(!visited[i])
                print(edges, n, i, visited);
        }
    }
}
int main(){
    int n, e;
    cin >> n >> e;
    int** edges = new int*[n];
    for(int i = 0; i < n; i++){
        edges[i] = new int[n];
        memset(edges[i], 0, sizeof(edges[i]));
    }
    for(int i=0; i < e; i++){
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    int* visited = new int[n];
    memset(visited, 0, sizeof(visited));
    print(edges, n, 0, visited); 
    return 0;
}