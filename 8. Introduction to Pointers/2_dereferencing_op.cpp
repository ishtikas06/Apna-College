#include <iostream>
using namespace std;

int main() {
int a = 10;
int *ptr = &a;

cout<<ptr<<endl;
cout<<*ptr<<" = "<<*(&a)<<endl; // Here * is used as a dereferencing operator.
return 0;
}