#include<iostream>
using namespace std;
void tower(int n, int first, int mid, int last){//first->mid using last, 
    if(n == 0)
        return;
    tower(n-1, 3, 1, 2);
        cout<< first<<"->"<<last<<endl;
    tower(n-1, 2, 3, 1);    
}
int main(){
    int n;
    scanf("%d", &n);
    tower(n, 3, 2, 1);
    return 0;
}