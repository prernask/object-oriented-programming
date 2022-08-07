#include<iostream>
using namespace std;
class person{
    public:
    int id;
    string name;
    float salary;

    person(int i,string n,float s){
        id=i;
        name=n;
        salary=s;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<" "<<endl;
    }
};
int main(){
    person p1=person(101,"sasa",200000);
    person p2=person(102,"yahu",300000);
    p1.display();
    p2.display();

    return 0;
}