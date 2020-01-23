#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int max;
        int sum = a+b+c+n;
        if(sum%3 == 0){
            if(a > sum/3 || b > sum/3 || c > sum/3)
                cout << "NO\n";
            else
                cout <<"YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}