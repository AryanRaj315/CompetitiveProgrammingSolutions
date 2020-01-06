#include<iostream>
#include<bits/stdc++.h> 

using namespace std;
    // {}   []
int main(){
    int n, k; 
    cin >> n >> k;
    vector<int> a;
    int b;
    bool found = find(a.begin(), a.end(), b) != a.end();
    for(int i = 0; i < n; i++){
        cin >> b;
        if(!found && a.size() == k){
            a.pop_back();
            a.push_back(b);
        }
        if(a.size() < k )
            a.push_back(b);
        else if(a.size() >= k){
            a.pop_back();
            a.push_back(b);
        }    
    }
    cout << a.size()<<endl;
    for(int i = 0; i < a.size(); i++){
        cout<<a[a.size()-1-i]<<" ";
    }
    return 0;
}