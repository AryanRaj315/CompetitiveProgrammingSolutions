#include<iostream>
using namespace std;
void tower(int n, char from, char aux, char to){//first->mid using last, 
    if(n == 1){
        cout << "Move disk 1 from rod " << from<< " to rod " << to<<endl; 
        return;
    }
    tower(n-1, from, to, aux);
    cout << "Move disk " << n << " from rod " << from<<" to rod " << to << endl; 
    tower(n-1, aux, from, to);    
}
int main(){
    int n;
    scanf("%d", &n);
    tower(n, 'a', 'c', 'b');
    return 0;
}