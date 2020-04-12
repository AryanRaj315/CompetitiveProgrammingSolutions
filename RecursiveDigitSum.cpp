#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // INPUT BLOCK
    int t;
    vector<int > arr;
    scanf("%d", &t);
    while(t--){
        int n, a;
        scanf("%d", &n);
        for(int i=0;i <n; i++){
            scanf("%d", &a);
            arr.push_back(a);
        }
    }
    sort(arr.begin(), arr.end());
    int size = arr.size();
    int count = 0;
    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size;j++){
            if(arr[i] < arr[j]){
                count += size - j;
                i+=1;
                j=i;
                // cout<<count;
            }
        }
        
    }
    cout << count<<endl;

    return 0;
}
// 3 6 8 10 11[]