#include<iostream>
#include<stack>
using namespace std;
// '(', '[', '{'
int main(){
    stack<char> a;
    string s = "a+b*{[c-d+([a*b])]}";
    bool flag = true;
    int n = s.length();
    a.push('#');
    for(int i= 0; i < n; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            a.push(s[i]);
        }
        else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if(s[i] == ')' && a.top() == '(' || s[i] == ']' && a.top() == '[' || s[i] == '}' && a.top() == '{'){
                a.pop();
            }
            else{
                flag = false;
                break;
            } 
        }
        
    }
    a.pop();
    if(flag && a.empty()){
        cout<<"Balanced";
    }
    else 
        cout << "Unbalanced";
    return 0;
}