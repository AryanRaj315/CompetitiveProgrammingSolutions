#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define ll long long

int n;
void recurr(vector<char> s,int n){
    if(n == 0)
        return;
    else{
        if(n %2 == 0)
            cout << s[n/2 - 1];
        else
            cout << s[n/2];    
    }
    recurr(s, 3*n/2);
    recurr(s, n/2);
}
int main(){
    // INPUT BLOCK
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vector<char> s;
        for(int i = 0; i < n; i++){
            char ch;
            scanf("%c", &ch);
            s.push_back(ch);
        }
        recurr(s, n/2);
    }
      
    return 0;
}