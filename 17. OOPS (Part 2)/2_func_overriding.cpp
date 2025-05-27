#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout<<"Show parent...\n";
    }
};

class Child : public Parent {
public: 
    void show() {
        cout<<"Show child...\n";
    }
};

int main() {
    Child c1;
    c1.show();
return 0;
}