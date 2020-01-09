#include<iostream>
#include<map>
using namespace std;

int GreatestDivisor(int n){
    for(int i = n/2; i >= 1; i--){
        if(n % i == 0)
            return i;
    }
}
bool recurr(int N, int turn){
    int x;
    if(N == 0) return false;
    if(N == 1){
        if(turn == 0){
            return true;
        }
        else 
            return false; 
    }
    if(N%2 == 0)
        x = N/2;
    else{
        x = GreatestDivisor(N);
    } 
    if(turn == 0)
        turn = 1;
    else{
        turn = 0;
    }     
    recurr(N-x, turn);  
}
int main(){
    int n;
    scanf("%d", &n);
    if(recurr(n, 1) == 1)
        cout << "True";
    else    
        cout << "False";
    return 0;    
}