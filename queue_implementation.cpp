#include <iostream>
#include <queue>
using namespace std;
int main(){
    //creating a queue named Names
    queue<string> Names;
    //pushing elements into the queue
    Names.push("Rob ");
    Names.push("Ethan ");
    Names.push("Dylan");
    //printing the elements of the queue
    cout<<"Queue: ";
    //looping until all elements are printed
    while(!Names.empty()){
        cout<<Names.front();       
        Names.pop();
    }
cout<<endl;
return 0;
    
}