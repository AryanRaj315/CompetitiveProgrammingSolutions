#include<iostream>
#include<map>
#include <iterator>
#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n ;
        cin >> n;
        if(n==0) break;
        int cars[n][2];
        for(int i = 0; i < n; i++){
            cin>>cars[i][0]>>cars[i][1];
        }
        int arr[n];
        bool checker[n] = {0};
        int count = 0;
        for(int i = 0; i < n; i++){
            if(checker[i+cars[1][i]] == 0){
                checker[i+cars[1][i]] = 1;
                arr[i+cars[1][i]] = cars[0][i];
            } 
            else {
                count = 1;
                break;
            } 
        }
        if(count == 0){
            for(int i = 0; i < n; i++){
                cout << arr[i]<<" ";
            }
        }
        else if(count == 1){
            cout << -1 ;
        }
        cout << endl;
    }
}

