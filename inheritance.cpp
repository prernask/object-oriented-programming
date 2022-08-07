#include<iostream>
using namespace std;
//base class
class Parent{
    public:
    int id_p;

};

//subclass inheriting from base class(parent)
class Child: public Parent{
    public:
    int id_c;

};

//main function
int main(){
    Child obj1;

    //an object of child has all data members
    // and member functions of class parent
obj1.id_c=7;
obj1.id_p=9;
cout<<"child id is:"<<obj1.id_c<<'\n';

cout<<"Parent id is:"<<obj1.id_p<<'\n';

return 0;
}