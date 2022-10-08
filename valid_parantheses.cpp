#include <iostream>
#include <stack>
using namespace std;
bool isBalancedExp(string exp){
    stack<char> stk;
    char x;
    for(int i=0; i<exp.length(); i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            stk.push(exp[i]);
            continue;
        }
        if(stk.empty())
            return false;
        switch(exp[i]){
            case ')':
            x=stk.top();
            stk.pop();
            if(x=='}' or x==']')
                return false;
                break;
            case '}':
            x=stk.top();
            stk.pop();
                if(x==')' or x==']')
                return false;
                break;
            case ']':
            x=stk.top();
            stk.pop();
                if(x=='}' or x==')')
                return false;
                break;
        }
    }
    return(stk.empty());
}
int main(){
    string expression = "[]{})";
    if(isBalancedExp(expression))
        cout<<"The string is valid.";
    else    
        cout<<"The string is invalid.";
}