#include <iostream>
using namespace std;

int main() {
float p, r, t;

cout<<"Enter principal amount: ";
cin>>p;

cout<<"Enter rate of interest: ";
cin>>r;

cout<<"Enter time: ";
cin>>t;

float si = (p*r*t)/100;

cout<<"SI is: "<<si;

return 0;
}