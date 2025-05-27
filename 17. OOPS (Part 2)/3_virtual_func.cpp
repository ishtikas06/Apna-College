#include <iostream>
using namespace std;

class Parent {
public:
    virtual void hello() {
        cout<<"Hello world...\n";
    }
};

class Child : public Parent {
public: 
    void hello() {
        cout<<"child hello...\n";
    }
};

int main() {
    Child c1;
    Parent *ptr;

    ptr = &c1;
    ptr -> hello();
return 0;
}