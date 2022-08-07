#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"eating";
    } 
};
class Dog:public Animal{
    public:
    void eat(){
        cout<<"eating bread";
    }
};
int main(){

    Dog d=Dog();
    d.eat();
    return 0;
}