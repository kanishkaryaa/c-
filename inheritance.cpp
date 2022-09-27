#include <iostream>
using namespace std;
class Parent{
    public:
    string sur_name = "Costa";
    void myFunc(){
        cout<<"Some things about the parent class";
    }
};
class Child: public Parent{
    public:
    string first_name = "Emil";
};
int main(){
    Child myObj;
    cout<<myObj.first_name + " " + myObj.sur_name + "\n";
    myObj.myFunc();

    return 0;
}