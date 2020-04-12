#include<iostream>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
map<int, int> dp;
//  n, k;
#define loop(i, start, end) for(int i = start; i < end; i++)
#define ll long long int
vector<ll> h;

void print(vector<ll> vec){
    loop(i, 0, vec.size()){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void recurr(vector<ll> vec, int sum, int num){
    if(vec.size() == h.size()){
        if(sum%2 != 0 && sum != 0)
            cout << "-1\n";
        else{
            print(vec);
            return;
        }

    }
    if(sum % 2 != 0 && sum != 0){
        recurr(vec, sum, num+1);
        vec.push_back(h[num]);
        recurr(vec, sum+h[num], num+1);
    }
    else if(sum%2 == 0 && sum!=0){
        print(vec);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, n;
        scanf("%d", &n);
        loop(i,0,n){
            scanf("%d", &a);
            h.push_back(a);
        }
        vector<ll> vec;
        recurr(vec, 0, 0);
    }
}