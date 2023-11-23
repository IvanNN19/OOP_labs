#include <iostream>

using namespace std;

class Base{
public:
    int a = 0;
    void f(){
        cout << "Base\n";
    }
};

class Derived: public Base{
public:
    int b = 1;
    void g(){
        cout << "Derived\n";
    }
};

int main(){
    Derived d;
    cout << d.a;
    d.f();
}