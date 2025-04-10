#include <iostream>
using namespace std;

int main() {
int pencil, pen, eraser;
cout<<"Enter cost of pencil: ";
cin>>pencil;

cout<<"Enter cost of pen: ";
cin>>pen;

cout<<"Enter cost of eraser: ";
cin>>eraser;

int cost = pen + pencil + eraser;

cout<<"Total cost is: "<<cost;
return 0;
}