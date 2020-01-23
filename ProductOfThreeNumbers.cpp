#include<iostream>
#include<vector>
#include<bits/stdc++.h>
// #include<pair>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        vector<pair<int, int> > a;
        for(int i = 2; i <=n/2; i++){
            if(n % i == 0){
                count = 0;
                while(n%i == 0){
                    n /= i;
                    count ++;
                }
                a.push_back(make_pair(i,count));
            }
        }
        if(a.size() >= 3){
            cout << "YES\n";
            int lamb = 1;
            cout <<pow(a[0].first, a[0].second)<<" ";
            cout <<pow(a[1].first, a[1].second)<<" ";
            for(int i = 2; i < a.size(); i++){
                lamb *= pow(a[i].first, a[i].second);
            }
            cout <<lamb<<" ";            
        }
        if(a.size() == 2){
            if(a[0].second + a[1].second >= 4){
                cout << a[0].first;
                cout <<pow(a[0].first, a[0].second)<<" ";
                cout <<pow(a[1].first, a[1].second)<<" ";
                cout <<pow(a[2].first, a[2].second)<<endl;
            }
                
            else
                cout << "NO\n";
            
        }
        if(a.size() == 1){
            if(a[0].second >= 6){
                cout << "YES\n";
                cout <<pow(a[0].first, 1)<<" ";
                cout <<pow(a[0].first, 2)<<" ";
                cout <<pow(a[0].first, a[0].second - 3)<<endl;
            }  
        }
        if(a.size() == 0)
            cout << "NO\n";
        for(int i = 0; i < a.size(); i++){
            cout << a[i]<<" ";
        }
        // if(count>=3){
        //     cout << "YES\n";
        // }
        // else
        //     cout << "NO\n";        
    }
    return 0;
}