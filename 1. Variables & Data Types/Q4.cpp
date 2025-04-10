#include <iostream>
# define PI 3.14    // Macro
using namespace std;

int main() {
float r;

cout<<"Enter radius of circle: ";
cin>>r;

float area = PI*r*r;
cout<<"Area of circle is: "<<area;

return 0;
}