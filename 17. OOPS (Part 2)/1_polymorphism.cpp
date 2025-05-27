#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    //FUNCTION OVERLOADING
    void show (int x) {
        cout<<x<<endl;
        cout<<"Int function called\n";
    }

    void show (string str) {
        cout<<str<<endl;
        cout<<"String function called\n";
    }
};

//OPERATOR OVERLOADING
class Complex {
    int real;
    int img;

public:
    Complex (int r, int i) {
        real = r;
        img = i;
    }
    
    void showNum () {
        cout<<real<<" + "<<img<<"i\n";
    }

    void operator + (Complex &c2) {
        int reResult = this -> real + c2.real;
        int reImg = this -> img + c2.img;
        Complex c3(reResult, reImg);
        cout<<"Result = ";
        c3.showNum();
    }
};

int main() {
    // Print obj1;
    // obj1.show(25);
    // obj1.show("ishtika");

    Complex c1(2, 3);
    Complex c2(6, 7);

    c1.showNum();
    c2.showNum();

    c1 + c2;
return 0;
}