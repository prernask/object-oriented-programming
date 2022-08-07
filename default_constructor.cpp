#include<iostream>
using namespace std;

class Employee{
    public:
    Employee(){
        cout<<"/nDefault cnstructor invoked";
    }
};
int main(){
    Employee e1;
    Employee e2;

    return 0;
}