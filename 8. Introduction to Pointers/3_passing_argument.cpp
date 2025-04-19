#include <iostream>
using namespace std;

// Pass by Value
void changeA(int a)
{
    a = 20;
    cout<<a<<" in changeA() function\n";
}

// Pass by Reference
void changeB(int *ptr)
{
    *ptr = 20;
    cout<<"b "<<*ptr<<" in changeB() function\n";
}

int main() {
    int a = 10;
    int b = 10;
    changeA(a);
    changeB(&b);
    cout<<a<<" in main() function\n";
    cout<<"b "<<b<<" in main() function\n";
return 0;
}