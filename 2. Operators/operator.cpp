#include <iostream>
using namespace std;

int main() {
int a = 5, x = 5;
int b = a++;  //store a in b, then increment a. So, b = 5, then a = 6
int c = ++x;  //increment x, then store x in c. So, x = 6, then c = 6

cout<<a<<endl; //6
cout<<b<<endl; //5
cout<<c<<endl; //6
return 0;
}