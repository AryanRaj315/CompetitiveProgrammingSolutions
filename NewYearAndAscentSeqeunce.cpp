#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define loop(n) for(int i=0; i<n; i++)
int main(){
    int t;
    scanf("%d", &t);
    vector<vector<int>> concat;
    loop(t){
        int n, num;
        scanf("%d", &n);
        vector<int> arr;
        loop(n){
            scanf("%d", &num);
            arr.push_back(num);
        }
        concat.push_back(arr);
    }
    return 0;
}