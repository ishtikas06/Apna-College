#include <iostream>
using namespace std;

//STATIC VARIABLE
void counter () {
    static int count = 0;
    count++;
    cout<<"Count = "<<count<<endl;
}

class Example {
public:
    static int x;
};
int Example::x = 0;

//STATIC OBJECT
class Example1 {
public:
    Example1 () {
        cout<<"Object created\n";
    }

    ~Example1 () {
        cout<<"Object destroyed\n";
    }
};


int main() {
    // counter();
    // counter();
    // counter();

    // Example eg1;
    // Example eg2;
    // Example eg3;

    // cout<<eg1.x++<<endl;
    // cout<<eg2.x++<<endl;
    // cout<<eg3.x++<<endl;

    int a = 0;
    if(a == 0) {
        static Example1 eg1;
    }

    cout<<"Code ending...\n";
return 0;
}