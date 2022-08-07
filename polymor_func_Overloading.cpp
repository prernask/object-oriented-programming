#include<iostream>
using namespace std;
class geeks{
    public:
    //fun with 1 int parameter
    void fun(int x){
        cout<<"value of x is:"<<x;

    }
    //fun with same name but 1 double parameter
    void fun(double x){
        cout<<"value of x is:"<<x;
    }
    //fun with same name but 2 int parameter
    void fun(int x,int y){
        cout<<"value of x and y is:"<<x<<y;
    }
};
int main(){
    geeks obj;
    obj.fun(7);
    obj.fun(10.0);
    obj.fun(12,20);




    return 0;
}