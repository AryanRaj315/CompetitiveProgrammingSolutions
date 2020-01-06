#include <bits/stdc++.h>

using namespace std;
    // {}   []
#define pi 3.14159265358979323846264338327950
int barn[100001];
double BinSearch(double min, double max, double f, double vol){
     
    double mid = (min + max)/2;
    if(vol == f*mid)
        return mid;
    while(vol != f*mid){
        if(f*mid > vol)
            return(min, mid,f,vol); 
        else
            return(mid, max,f,vol); 
    }    
}
int main(){
    int n, f;
    int t;
    cin >> t;
    double ans[t]; 
    double alp = t;
    int j = 0;
    while(t--){
        cin >> n >> f;
        f++;
        double arr[n];
        double a;
        double vol = 0;
        for(int i = 0; i < n; i++){
            cin >> a;
            arr[i] = pi*a*a;
            vol += arr[i];
        }
        sort(arr,arr+n);
        ans[j] = BinSearch(arr[0], vol, f, vol);   
        j++; 
    }
	for(int i = 0; i < alp; i++){        
        cout <<ans[i]/(f)<<endl;
    } 
    return 0;
}