
#include<iostream>
using namespace std;
class Encapsulation{
    private:
    //data hidden from outside world
    int x;

    public:
    void set(int a)
    {
        //fun to set value of var x
        x=a;

    }
    // fun to return the value of var x
    int get()
    {
        return x;
    }
};
int main(){
    Encapsulation obj;
    obj.set(6);
    cout<<obj.get();

    return 0;
}
