#include <stack>
#include <iostream>
using namespace std;

int main(){

    //creating a stack of integers
    stack<int> Integers;

    //adding elements in the stack
    Integers.push(10);
    Integers.push(11);
    Integers.push(13);
    Integers.pop();

    //printing the top element of the stack after the push and pop operations
    cout<<Integers.top();
    return 0;
    }

    
