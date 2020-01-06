#include <bits/stdc++.h>

using namespace std;
    // {}   []

int barn[100001];
int BinSearch(int min, int max, int noC, vector<int> c){
    int count = 1;
    int var = c[0];
    int mid = (min + max)/2;
    if(mid == min == max)
        return mid;
    for(int i = 1; i < c.size(); i++){
        if(c[i] - var >= mid){
            count++;
            var = c[i];
        }
    }    
    if(count == noC)
        return BinSearch(mid, max, noC, c); 
    return  BinSearch(min, mid, noC, c);  
}
int main(){
    int t, n, c;
    cin >> t;
    long long int ans[t]; 
    int alp = t;
    int j = 0;
    while(t--){
        cin >> n >> c;
        vector<int> xi;
        int a;
        for(int i = 0; i < n; i++){
            cin >> a;
            xi.push_back(a);
        }
        sort(xi.begin(), xi.end());
        int minD = xi[0];
        int maxD = xi[xi.size()-1] - minD; 
        ans[j] = BinSearch(minD, maxD, c, xi);   
        j++; 
    }
	for(int i = 0; i < alp; i++){        
        cout <<ans[i]<<endl;
    } 
    return 0;
}