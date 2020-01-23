#include<iostream>
#include<vector>
#include<bits/stdc++.h>
// #include<pair>
using namespace std;
// #define pair<int, int> pairs
int recurr(vector<pair<int, int>> s){

}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n;
        vector< pair <int,int> > s;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            // pairs a = make_pair(x, y);
            s.push_back(make_pair(x, y));
        }
        int a = 0, b = 0;
        bool flag = true;
        vector<char> ans;
        sort(s.begin(), s.end());
        for(int i = 0; i < n; i++){
            while(a < s[i].first){
                ans.push_back('R');
                a+=1;
                if(a == s[i].first && b == s[i].second)
                    continue;
            }
            // else if(a > s[i])
            while(b < s[i].second){
                b+=1;
                ans.push_back('U');
                if(a == s[i].first && b == s[i].second)
                    continue;
            }
            if(a > s[i].first || b > s[i].second){
                flag = false;

            }
                
            // else if(a > s[i])
        }
        int len = ans.size();
        if (flag){
            cout << "YES\n";
            for(int i = 0; i < len; i++){
            cout << ans[i];
            }
        }
        else
        {
                cout<<"NO\n";
        }
        
        
        cout << endl;
        
    }
    return 0;
}