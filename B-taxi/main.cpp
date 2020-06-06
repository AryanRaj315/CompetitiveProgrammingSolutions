#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<cstring>
#include<map>
using namespace std;


#define loop(i, start, end) for(int i = start; i <= end; i++)
#define ll long long int
#define arrayInput(arr, n) loop(i, 0, n-1){ cin >> arr[i];}
#define arrayDisplay(arr, n) loop(i, 0, n-1){ cout << arr[i] << " ";}
#define GODSPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mem(a, num) memset(a, num, sizeof(a)) 
// #define ll long long 
#define vi vector<Int>
#define pb push_back
// For sorting
#define sortva(v) sort(v.begin(),v.end())
#define sortvd(v) sort(v.rbegin(),v.rend())

int main() {
    GODSPEED
    int n;
    cin >> n;
    int arr[n];
    arrayInput(arr, n);
    map<int, int> freq;
    loop(i, 0, n-1){
        freq[arr[i]]++;
    }
    int count = freq[4];
    if (freq[2] % 2 == 0){
        // Pair all the 2's
        count += freq[2]/2;
        freq[2]=0;
    }
    else{
        count += freq[2]/2;
        freq[2] = 1;
        if(freq[1] > freq[3]){
            //Try to pair the two with either one 1 or 2 ones
            if(freq[1] >= freq[3]+2){
                count ++;
                freq[1]-=2;
            }
            else{
                count++;
                freq[1]--;
            }
        }
        else{
            freq[2]--;
            count++;
        }
        freq[2] = 0;
    }
    if(freq[1] >= freq[3]){
        count += freq[3];
        freq[1] -= freq[3];
        freq[3] = 0;
        if(freq[1] > 0)
            count += freq[1]/4 + (freq[1]%4 != 0);
    }
    else{
        count += freq[3];
    }
    cout << count;
    return 0;
}
