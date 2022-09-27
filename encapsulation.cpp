#include <iostream>
using namespace std;

class Employee{
    //access specifier
    private:
    int salary;

    public:
    int setSalary(int s){
        salary=s;
    }
    int getSalary(){
       cout<<salary;
    }
}; 
int main(){
    Employee myObj;
    myObj.setSalary(15000);
    myObj.getSalary();
    return 0;
}