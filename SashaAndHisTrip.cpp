#include<iostream>
#include<map>
using namespace std;
#define ll long long
int N, V;
int main(){
    scanf("%d %d", &N, &V);
    int reqPet = N-1;
    int cost = 0;
    for(int i = 1; i <= N; i++){
        if(i == 1){
            cost += V;
        }
        else if(i > 1){
            cost += i;
        }
        if(V==N-i){
            break;
        }
    }
    cout << cost;
    return 0;
}