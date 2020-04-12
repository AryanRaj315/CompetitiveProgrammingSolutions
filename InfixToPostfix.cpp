#include<iostream>
#include<stack>
#include<vector>
using namespace std;

string exp = "a+b*(c^d-e)^(f+g*h)-i";
int priority(char ch){
    if( ch == '+' || ch == '-')
        return 1;
    else if(ch == '*' || ch == '/')
        return 2;
    else if(ch == '^')
        return 3;
    else if(ch == '#')
        return 0;
    else if(ch == '(')
        return 0;
}
vector<char> showstack(stack <char> s) 
{ 
    vector<char> str;
    while (!s.empty()) 
    { 
        str.push_back(s.top()); 
        s.pop(); 
    } 
    return str;
} 
  
int main(){
    stack<char> s1, s2;
    int n = exp.length();
    s1.push('#');
    s2.push('#');
    vector<char> chr1;
    for(int i = 0; i < n; i++){
        // cout << "1\n";
        cout << exp[i]<<endl;
        if((int(exp[i]) >= 65 && int(exp[i]) <= 90) || (int(exp[i]) >= 97 && int(exp[i]) <= 122)){
            // cout << "2\n";
            s1.push(exp[i]);
        }

        
        else if(exp[i] == '(')
            s2.push(exp[i]);
        else if(exp[i] == ')'){
            while(s2.top() != '('){
                // cout << "CheckB\n";
                s1.push(s2.top());
                s2.pop();
            }
            if(s2.top()=='(')
                s2.pop();
        }
        else{
            
            if(s2.empty()){
                s2.push(exp[i]);
            }
            else if(priority(exp[i]) > priority(s2.top())){
                s2.push(exp[i]);
            }
            else if(priority(exp[i]) < priority(s2.top())){
                while(priority(exp[i]) < priority(s2.top())){
                    s1.push(s2.top());
                    s2.pop();
                    if(priority(exp[i]) > priority(s2.top()))
                        s2.push(exp[i]);
                    else if(priority(exp[i]) == priority(s2.top())){
                        s1.push(s2.top());
                        s2.pop();
                    }
                }
            }
            else{
                cout <<"Inside\n";
                s1.push(s2.top());
                s2.pop();
            } 
        }  
        // chr1 = showstack(s2);
        // for(int i = chr1.size()-2; i >= 0; i--){
        //     cout << chr1[i];
        // }
        cout << "    ------------\n";
        // if(i == n-1){
        //     while(!s2.empty()){
        //         s1.push(s2.top());
        //         s2.pop();
        //     }
            
        // }
        // a+b*(c^d-e)^(f+g*h)-i
        // abcd^e-fgh*+^*+i-
        // abcd^e-fgh*+^*i+
    }
    // while(!s2.empty()){
    //     s1.push(s2.top());
    //     s2.pop();
    // }
    vector<char> str = showstack(s1);
    
    for(int i = str.size()-2; i >= 0; i--){
        cout << str[i];
    }
    
    return 0;
}