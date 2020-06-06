#include<iostream>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
//  n, k;
#define loop(i, start, end) for(int i = start; i <= end; i++)
#define revloop(i, start, end) for(int i = start; i >= end; i--)
#define ll long long int
#define pb push_back
// vector<ll> weight, value;
// ll n, w;
int main(){
	int m, s;
    scanf("%d %d", &m, &s);
    int min = pow(10, m-1);
    int max = pow(10, m)-1;
    int num, sum = 0;
    vector<int> ans;
    loop(i, min, max){
        num = i;
        sum = 0;
        while(num){
            sum+=num%10;
            num /= 10;
            if(sum>s)
            continue;
        }
        if(sum == s){
            ans.pb(i);
            break;
        }  
    }
    revloop(i, max, min){
        num = i;
        sum = 0;
        while(num){
            sum+=num%10;
            num /= 10;
            if(sum>s)
            continue;
        }
        if(sum == s){
            ans.pb(i);
            break;
        }  
        
    }
    // cout<<"Blahh\n";
    if(ans.size()==2){
        cout<< ans[0]<<" "<<ans[1];
    }
    else{
        cout<< -1<<" "<<-1;
    }
    
}